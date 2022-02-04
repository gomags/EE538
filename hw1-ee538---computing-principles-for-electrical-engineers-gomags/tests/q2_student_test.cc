// NOTE: Add your own q2 tests in this file
#include "src/lib/cpplib.h"

#include <map>
#include <vector>

#include "gtest/gtest.h"

// Add your own tests in this file
TEST(Q2_Student1, FindAverage) {
  std::vector<int> test_vector;  
  CPPLib cpplib;

  test_vector = {};
  EXPECT_EQ(cpplib.FindAverage(test_vector), 0.0);
}

TEST(Q2_Student2, FindAverage) {
  std::vector<int> test_vector;  
  CPPLib cpplib;

  test_vector = {1};
  EXPECT_EQ(cpplib.FindAverage(test_vector), 1.0);
}

TEST(Q2_Student3, FindAverage) {
  std::vector<int> test_vector;  
  CPPLib cpplib;

  test_vector = {-1, 2, 3};
  EXPECT_NEAR(cpplib.FindAverage(test_vector), 1.33, 0.01);
}

TEST(Q2_Student4, FindAverage) {
  std::vector<int> test_vector;  
  CPPLib cpplib;

  test_vector = {1,1,1};
  EXPECT_EQ(cpplib.FindAverage(test_vector), 1.0);
}

TEST(Q2_Student5, FindAverage) {
  std::vector<int> test_vector;  
  CPPLib cpplib;
  
  test_vector = {-1, -2, 3};
  EXPECT_EQ(cpplib.FindAverage(test_vector), 0.0);
}


TEST(Q2_Student6, FindAverage) {
  std::vector<int> test_vector;  
  CPPLib cpplib;

  test_vector = {2000, -2000, -3000, 3000, 7, 19, -27};
  EXPECT_NEAR(cpplib.FindAverage(test_vector), -0.14, 0.01);

}

TEST(Q2_Student7, FindAverage) {
  std::vector<int> test_vector;  
  CPPLib cpplib;

  test_vector = {INT16_MAX,INT16_MAX,INT16_MAX};
  EXPECT_NEAR(cpplib.FindAverage(test_vector), INT16_MAX, 1);

}
