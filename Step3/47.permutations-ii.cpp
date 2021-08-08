/*
 * @lc app=leetcode id=47 lang=cpp
 *
 * [47] Permutations II
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
  vector<vector<int>> permuteUnique(vector<int> &nums) {
    vector<vector<int>> result;
    sort(nums.begin(), nums.end());
    per(nums, 0, result);
    return result;
  }
  void per(vector<int> nums, int start, vector<vector<int>> &result) {
    int n = nums.size();
    if (start == n - 1) {
      result.push_back(nums);
    } else {
      for (int i = start; i < n; i++) {
        if (i == start || nums[i] != nums[start]) {
          swap(nums[i], nums[start]);
          per(nums, start + 1, result);
        }
      }
    }
  }
};
// @lc code=end
