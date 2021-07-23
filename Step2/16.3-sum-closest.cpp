/*
 * @lc app=leetcode id=16 lang=cpp
 *
 * [16] 3Sum Closest
 */
#include <bits/stdc++.h>
using namespace std;
// @lc code=start
class Solution {
public:
  int threeSumClosest(vector<int> &nums, int target) {
    sort(nums.begin(), nums.end());
    int n = nums.size();
    int sum = nums[0] + nums[1] + nums[2];
    for (int i = 0; i < n - 2; i++) {
      int j = i + 1;
      int k = n - 1;
      while (j < k) {
        int curSum = nums[i] + nums[j] + nums[k];
        if (abs(curSum - target) < abs(sum - target))
          sum = curSum;
        if (curSum > target) {
          k--;
        } else if (curSum < target) {
          j++;
        } else
          return target;
      }
    }
    return sum;
  }
};
// @lc code=end
