/*
 * @lc app=leetcode id=11 lang=cpp
 *
 * [11] Container With Most Water
 */

// @lc code=start
class Solution
{
public:
  int maxArea(vector<int> &height)
  {
    int left = 0, right = height.size() - 1;
    int area = INT_MIN;
    while (left <= right)
    {
      area = max(area, min(height[left], height[right]) * (right - left));
      (height[left] < height[right]) ? left++ : right--;
    }

    return area;
  }
};
// @lc code=end
