

#include <iostream>
#include <vector>

#include "gmock/gmock.h"
#include "gtest/gtest.h"

class Turtle {
 public:
  virtual ~Turtle() {}
  virtual void PenUp() = 0;
  virtual void PenDown() = 0;
  virtual void Forward(int distance) = 0;
  virtual void Turn(int degrees) = 0;
  virtual void GoTo(int x, int y) = 0;
  virtual int GetX() const = 0;
  virtual int GetY() const = 0;
};

class MockTurtle : public Turtle {
 public:
  MOCK_METHOD0(PenUp, void());
  MOCK_METHOD0(PenDown, void());
  MOCK_METHOD1(Forward, void(int distance));
  MOCK_METHOD1(Turn, void(int degrees));
  MOCK_METHOD2(GoTo, void(int x, int y));
  MOCK_CONST_METHOD0(GetX, int());
  MOCK_CONST_METHOD0(GetY, int());
};

class Painter {
  Turtle* turtle;

 public:
  Painter(Turtle* turtle) : turtle(turtle) {}

  bool DrawCircle(int x, int y, int r) {
    int next_y;
    turtle->GoTo(x, y + r);
    turtle->PenDown();
    turtle->PenUp();
    next_y = turtle->GetY();

    turtle->GoTo(x, y - r);
    turtle->PenDown();
    turtle->PenUp();
    next_y = turtle->GetY();

    return true;
  }
};

// 1. Import the gMock names from the testing namespace such that you can use
// them unqualified (You only have to do it once per file). Remember that
// namespaces are a good idea.
// 2. Create some mock objects.
// 3. Specify your expectations on them (How many times will a method be called?
// With what arguments? What should it do? etc.).
// 4. Exercise some code that uses the mocks; optionally, check the result using
// googletest assertions. If a mock method is called more than expected or with
// wrong arguments, you'll get an error immediately.
// 5. When a mock is destructed, gMock will automatically check whether all
// expectations on it have been satisfied.

using ::testing::_;
using ::testing::AtLeast;  // #1
using ::testing::Exactly;  // #1
using ::testing::NiceMock;
using ::testing::Return;  // #1

TEST(PainterTest, CanDrawCircle) {
  // Wrap in NiceMock to suppress uninteresting warnings from GMock.
  // These warnings happen when an API is called, but there is no expectation
  // for it.
  NiceMock<MockTurtle> turtle;  // #2
  // EXPECT_CALL(turtle, PenDown())  // #3
  //     .Times(AtLeast(2));

  // EXPECT_CALL(turtle, GoTo(0, 10))  // #3
  //     .Times(1);

  // EXPECT_CALL(turtle, GoTo(0, -10))  // #3
  //     .Times(1);

  // EXPECT_CALL(turtle, GetY())
  //     .Times(2)
  //     .WillOnce(Return(100))
  //     .WillOnce(Return(150));

  Painter painter(&turtle);  // #4
  // Painter painter(new TurtleMac1800);  // #4

  EXPECT_TRUE(painter.DrawCircle(0, 0, 10));  // #5
  EXPECT_TRUE(painter.DrawCircle(0, 0, 10));  // #5
}
