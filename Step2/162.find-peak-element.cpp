/*
 * @lc app=leetcode id=162 lang=cpp
 *
 * [162] Find Peak Element
 */
#include <bits/stdc++.h>
using namespace std;
// @lc code=start
class Solution {
public:
  int findPeakElement(vector<int> &nums) {
    int left = 0, right = nums.size() - 1;
    while (left < right - 1) {
      int mid = (left + right) / 2;
      if (nums[mid] > nums[mid + 1] && nums[mid] > nums[mid - 1]) {
        return mid;
      } else if (nums[mid] > nums[mid + 1]) {
        right = mid - 1;
      } else {
        left = mid + 1;
      }
    }
    return nums[left] > nums[right] ? left : right;
  }
};
// @lc code=end
