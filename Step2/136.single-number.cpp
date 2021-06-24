/*
 * @lc app=leetcode id=136 lang=cpp
 *
 * [136] Single Number
 */
// #include <bits/stdc++.h>
// using namespace std;
// @lc code=start
class Solution
{
public:
  int singleNumber(vector<int> &nums)
  {
    int result = nums[0];
    for (int i = 1; i < nums.size(); i++)
    {
      result ^= nums[i];
    }
    return result;
  }
};
// @lc code=end
