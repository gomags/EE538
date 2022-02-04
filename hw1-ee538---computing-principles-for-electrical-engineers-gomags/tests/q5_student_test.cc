#include "src/lib/cpplib.h"

#include <map>
#include <vector>

#include "gtest/gtest.h"

// Add your own tests in this file
TEST(Q5_Student, ReturnIntro) {
  CPPLib cpplib;
  std::string actual = cpplib.PrintIntro();
  std::string test_vector = "\nHello! I'm Gopi.\n"
            "\nReach me out at: gmaganti@usc.edu \n"
            "\n Major: Machine Learning & Data Science\n";
  EXPECT_EQ(actual, test_vector);
}