/*
 * @lc app=leetcode id=581 lang=cpp
 *
 * [581] Shortest Unsorted Continuous Subarray
 */
#include <bits/stdc++.h>
using namespace std;
// @lc code=start
class Solution {
public:
  int findUnsortedSubarray(vector<int> &nums) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    vector<int> sorted = nums;

    sort(nums.begin(), nums.end());
    int left = 0, right = nums.size() - 1;

    while (left < right) {
      if (nums[right] != sorted[right] && nums[left] != sorted[left])
        break;

      if (nums[right] == sorted[right])
        right--;

      if (nums[left] == sorted[left])
        left++;
    }
    return ((left == right) ? 0 : (right - left + 1));
  }
};
// @lc code=end
