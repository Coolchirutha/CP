/*
 * @lc app=leetcode id=209 lang=cpp
 *
 * [209] Minimum Size Subarray Sum
 */
#include <bits/stdc++.h>
using namespace std;
// @lc code=start
class Solution {
public:
  int minSubArrayLen(int target, vector<int> &nums) {
    int left = 0, right = 0, n = nums.size(), curSum = 0, result = INT_MAX;

    while(right < n){
      curSum += nums[right];
      right++;
      while(curSum >= target){
        result = min(result, right - left);
        curSum -= nums[left];
        left++;
      }
    }
    return ((result == INT_MAX) ? 0 : result);
  }
};
// @lc code=end
