/*
 * @lc app=leetcode id=26 lang=cpp
 *
 * [26] Remove Duplicates from Sorted Array
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
  int removeDuplicates(vector<int> &nums) {
    int count = 0, n = nums.size();
    for (int i = 1; i < n; i++) {
      if (nums[i] == nums[i - 1])
        count++;
      else
        nums[i - count] = nums[i];
    }
    return n - count;
  }
};
// @lc code=end
