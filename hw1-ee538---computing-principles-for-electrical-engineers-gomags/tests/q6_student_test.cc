#include "src/lib/cpplib.h"

#include <map>
#include <vector>
#include "gtest/gtest.h"


// Add your own tests in this file
TEST(Q6_Student0, ReturnIntro) {
  CPPLib cpplib;
  std::vector<std::vector<std::vector<int>>> test_vector; 
  std::vector<int> expected;
  test_vector = {{{}}};
  expected = {};
  EXPECT_EQ(cpplib.Flatten3DVector(test_vector), expected);
}

TEST(Q6_Student1, ReturnIntro) {
  CPPLib cpplib;
  std::vector<std::vector<std::vector<int>>> test_vector; 
  std::vector<int> expected;
  test_vector = {{{1, 2}, {3, 4}}, {{5}, {6}, {}}, {{7, 8}}};
  expected = {1, 2, 3, 4, 5, 6, 7, 8};
  EXPECT_EQ(cpplib.Flatten3DVector(test_vector), expected);
}

TEST(Q6_Student2, ReturnIntro) {
  CPPLib cpplib;
  std::vector<std::vector<std::vector<int>>> test_vector; 
  std::vector<int> expected;
  test_vector = {{{1, 2}, {3, 4}}, {{}}, {{7, 8}}};
  expected = {1, 2, 3, 4, 7, 8};
  EXPECT_EQ(cpplib.Flatten3DVector(test_vector), expected);
}

TEST(Q6_Student3, ReturnIntro) {
  CPPLib cpplib;
  std::vector<std::vector<std::vector<int>>> test_vector; 
  std::vector<int> expected;
  test_vector = {{{}, {}}, {{0}}, {{}}};
  expected = {0};
  EXPECT_EQ(cpplib.Flatten3DVector(test_vector), expected);
}
