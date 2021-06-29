/*
 * @lc app=leetcode id=485 lang=cpp
 *
 * [485] Max Consecutive Ones
 */
#include <bits/stdc++.h>
using namespace std;
// @lc code=start
class Solution
{
public:
  int findMaxConsecutiveOnes(vector<int> &nums)
  {
    int maxCount = (nums[0]) ? 1 : 0, curCount = maxCount, n = nums.size();

    for (int i = 1; i < n; i++)
    {
      if (nums[i] == 1)
      {
        curCount++;
        maxCount = max(maxCount, curCount);
      } else {
        curCount = 0;
      }
    }
    return maxCount;
  }
};
// @lc code=end
