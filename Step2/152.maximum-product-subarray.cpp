/*
 * @lc app=leetcode id=152 lang=cpp
 *
 * [152] Maximum Product Subarray
 */
#include <bits/stdc++.h>
using namespace std;
// @lc code=start
class Solution
{
public:
  int maxProduct(vector<int> &nums)
  {
    if (nums.empty())
    {
      return 0;
    }
    // Here we must take care of both the minimum product and max product.
    // Minumum since when it is negative and is multiplied with another negative will become positive
    int result = nums[0], curMin = nums[0], curMax = nums[0];
    for (int i = 1; i < nums.size(); i++)
    {
      int p1 = curMax * nums[i];
      int p2 = curMin * nums[i];

      curMax = max(nums[i], max(p1, p2));
      curMin = min(nums[i], min(p1, p2));
      result = (curMax > result) ? curMax : result;
    }
    return result;
  }
};
// @lc code=end
