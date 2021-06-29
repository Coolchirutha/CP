/*
 * @lc app=leetcode id=45 lang=cpp
 *
 * [45] Jump Game II
 */
#include <bits/stdc++.h>
using namespace std;
// @lc code=start
class Solution
{
public:
  int jump(vector<int> &nums)
  {
    int result = 1, maxIndex = nums[0], curEnd = nums[0], n = nums.size();

    if (n == 1 || nums[0] == 0)
    {
      return 0;
    }

    for (int i = 1; i < n; i++)
    {
      if (i == n - 1)
      {
        return result;
      }

      maxIndex = max(maxIndex, nums[i] + i);

      if (i == curEnd)
      {
        result++;
        curEnd = maxIndex;
      }
    }

    return result;
  }
};
// @lc code=end
