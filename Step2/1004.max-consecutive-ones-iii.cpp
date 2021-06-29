/*
 * @lc app=leetcode id=1004 lang=cpp
 *
 * [1004] Max Consecutive Ones III
 */
#include <bits/stdc++.h>
using namespace std;
// @lc code=start
class Solution
{
public:
  int longestOnes(vector<int> &nums, int k)
  {
    int left = 0, right;
    for (right = 0; right < nums.size(); right++)
    {
      if (nums[right] == 0)
        k--;

      if (k < 0)
      {
        if (nums[left] == 0)
        {
          k++;
        }
        left++;
      }
    }
    return right - left;
  }
};
// @lc code=end
