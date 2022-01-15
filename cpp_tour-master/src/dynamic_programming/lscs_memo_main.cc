#include <iostream>
#include <map>
#include <string>
#include <vector>

#include "src/lib/utility.h"
// Given an integer array nums, find the contiguous subarray (containing at
// least one number) which has the largest sum and return its sum.

// Example:

// Input: [-2,1,-3,4,-1,2,1,-5,4],
// Output: 6
// Explanation: [4,-1,2,1] has the largest sum = 6.

// memo map works like a cache
std::map<int, int> memo;

// Finds LSCS at index i
int LSCS(std::vector<int> &input, int i) {
  if (i == 0) {
    return input[0];
  } else {
    if (memo.count(i) > 0) {
      return memo[i];
    } else {
      memo[i] = std::max(LSCS(input, i - 1) + input[i], input[i]);
      return memo[i];
    }
  }
}

int MAX_LSCS(std::vector<int> &input) {
  std::vector<int> sum_vector;

  for (int i = 0; i < input.size(); i++) {
    sum_vector.push_back(LSCS(input, i));
  }

  return *std::max_element(sum_vector.begin(), sum_vector.end());
}

// Driver function
int main() {
  std::vector<int> input = {-2, 1, -3, 4, -1, 2, 1, -5, 3};
  auto max = MAX_LSCS(input);

  std::cout << "max: " << max << std::endl;

  return 0;
}