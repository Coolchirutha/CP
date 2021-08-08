/*
 * @lc app=leetcode id=35 lang=cpp
 *
 * [35] Search Insert Position
 */
#include <bits/stdc++.h>
using namespace std;
// @lc code=start
class Solution {
public:
  Solution() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
  }
  int searchInsert(vector<int> &nums, int target) {
    if (target <= nums[0])
      return 0;
    for (int i = 1; i < nums.size(); i++) {
      if (target == nums[i])
        return i;
      if (target < nums[i] && target > nums[i - 1])
        return i;
    }
    return nums.size();
  }
};
// @lc code=end
