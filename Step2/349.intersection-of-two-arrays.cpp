/*
 * @lc app=leetcode id=349 lang=cpp
 *
 * [349] Intersection of Two Arrays
 */
#include <bits/stdc++.h>
using namespace std;
// @lc code=start
class Solution {
public:
  vector<int> intersection(vector<int> &nums1, vector<int> &nums2) {
    set<int> hashmap(nums1.begin(), nums1.end());
    vector<int> result;
    for (auto &i : nums2) {
      if (hashmap.erase(i)) {
        result.push_back(i);
      }
    }
    return result;
  }
};
// @lc code=end
