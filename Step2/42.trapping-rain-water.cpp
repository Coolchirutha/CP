/*
 * @lc app=leetcode id=42 lang=cpp
 *
 * [42] Trapping Rain Water
 */
#include <bits/stdc++.h>
using namespace std;
// @lc code=start
class Solution
{
public:
  int trap(vector<int> &height)
  {
    int left = 0, right = height.size() - 1, wLevel = 0, result = 0;
    while (left < right)
    {
      int curBottom = height[(height[left] < height[right]) ? left++ : right--];
      wLevel = max(wLevel, curBottom);
      result += (wLevel - curBottom);
    }
    return result;
  }
};
// @lc code=end
