/*
 * @lc app=leetcode id=918 lang=cpp
 *
 * [918] Maximum Sum Circular Subarray
 */
#include <bits/stdc++.h>
using namespace std;
// @lc code=start
class Solution {
public:
  int maxSubarraySumCircular(vector<int> &nums) {
    // There are two cases that can occur while finding the max sum subarray. 1.
    // The subarray does not overflow and is between the limits.  2. The
    // subarray overflows.  Now, the excluded part in the max subarray is the
    // min subarray. So when the subarray overflows, the min subarray doesn't
    // overflow. Hence we can simply calculate the min and max subarrays and
    // also track the sum so we get max subarray of the circular array is sum -
    // minimum sum. We are getting the min and max subarrays using Kadane's
    // algorithm.

    int sum = 0, curMaxSum = 0, curMinSum = 0, maxSum = nums[0],
        minSum = nums[0];

    for (auto &i : nums) {
      curMaxSum = max(curMaxSum + i, i);
      maxSum = max(maxSum, curMaxSum);

      curMinSum = min(curMinSum + i, i);
      minSum = min(minSum, curMinSum);

      sum += i;
    }
    return ((maxSum > 0) ? max(maxSum, sum - minSum) : maxSum);
  }
};
// @lc code=end
