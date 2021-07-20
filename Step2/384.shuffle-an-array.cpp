/*
 * @lc app=leetcode id=384 lang=cpp
 *
 * [384] Shuffle an Array
 */
#include <bits/stdc++.h>
using namespace std;
// @lc code=start
class Solution {
  vector<int> nums;

public:
  Solution(vector<int> &nums) { this->nums = nums; }

  /** Resets the array to its original configuration and return it. */
  vector<int> reset() { return nums; }

  /** Returns a random shuffling of the array. */
  vector<int> shuffle() {
    vector<int> result(nums);
    for (int i = 0; i < result.size(); i++) {
      // Get a random integer from 0 to result.size() - i.
      int randPos = rand() % (result.size() - i);
      swap(result[i + randPos], result[i]);
    }
    return result;
  }
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(nums);
 * vector<int> param_1 = obj->reset();
 * vector<int> param_2 = obj->shuffle();
 */
// @lc code=end
