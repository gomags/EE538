#include "src/lib/cpplib.h"

#include <map>
#include <vector>

#include "gtest/gtest.h"

// Add your own tests in this file


TEST(Q7_Student0, ReturnIntro) {
  CPPLib cpplib;
  int expected = -1;
  int actual = cpplib.climbStairs(45);
  EXPECT_EQ(actual, expected);
}

TEST(Q7_Student1, ReturnIntro) {
  CPPLib cpplib;
  int expected = -1;
  int actual = cpplib.climbStairs(-2);
  EXPECT_EQ(actual, expected);
}

TEST(Q7_Student2, ReturnIntro) {
  CPPLib cpplib;
  int expected = 0;
  int actual = cpplib.climbStairs(0);
  EXPECT_EQ(actual, expected);
}

TEST(Q7_Student3, ReturnIntro) {
  CPPLib cpplib;
  int expected = 89;
  int actual = cpplib.climbStairs(10);
  EXPECT_EQ(actual, expected);
}

TEST(Q7_Student4, ReturnIntro) {
  CPPLib cpplib;
  int expected = 8;
  int actual = cpplib.climbStairs(5);
  EXPECT_EQ(actual, expected);
}

