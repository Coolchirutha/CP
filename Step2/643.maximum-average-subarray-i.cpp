/*
 * @lc app=leetcode id=643 lang=cpp
 *
 * [643] Maximum Average Subarray I
 */
#include <bits/stdc++.h>
using namespace std;
// @lc code=start
class Solution {
public:
  double findMaxAverage(vector<int> &nums, int k) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    double curSum = 0.0;

    for (int i = 0; i < k; i++) {
      curSum += nums[i];
    }

    double result = (double)curSum / k;

    for (int i = k; i < nums.size(); i++) {
      curSum = curSum + nums[i] - nums[i - k];
      result = max(result, curSum / k);
    }
    return result;
  }
};
// @lc code=end
