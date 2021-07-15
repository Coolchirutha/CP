/*
 * @lc app=leetcode id=713 lang=cpp
 *
 * [713] Subarray Product Less Than K
 */
#include <bits/stdc++.h>
using namespace std;
// @lc code=start
class Solution {
public:
  int numSubarrayProductLessThanK(vector<int> &nums, int target) {
    long long curProduct = 1;
    int result = 0, left = 0, n = nums.size();
    for (int right = 0; right < nums.size(); right++) {
      curProduct *= nums[right];
      while (curProduct >= target && left <= right) {
        curProduct /= nums[left];
        left++;
      }
      result += (right - left + 1);
    }
    return result;
  }
};
// @lc code=end
