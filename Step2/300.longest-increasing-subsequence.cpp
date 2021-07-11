/*
 * @lc app=leetcode id=300 lang=cpp
 *
 * [300] Longest Increasing Subsequence
 */
#include <bits/stdc++.h>
using namespace std;
// @lc code=start
class Solution {
public:
  int lengthOfLIS(vector<int> &nums) {
    vector<int> result;
    for (int i = 0; i < nums.size(); i++) {
      auto itr = lower_bound(result.begin(), result.end(), nums[i]);
      if (itr == result.end())
        result.push_back(nums[i]);
      else
        *itr = nums[i];
    }
    return result.size();
  }
};
// @lc code=end
