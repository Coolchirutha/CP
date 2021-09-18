/*
 * @lc app=leetcode id=217 lang=cpp
 *
 * [217] Contains Duplicate
 */
#include <bits/stdc++.h>
using namespace std;
// @lc code=start
class Solution {
public:
  bool containsDuplicate(vector<int> &nums) {
    map<int, int> mp;
    for (int i = 0; i < nums.size(); i++) {
      if (mp.count(nums[i])) {
        return true;
      }
      mp[nums[i]]++;
    }
    return false;
  }
};
// @lc code=end
