/*
 * @lc app=leetcode id=350 lang=cpp
 *
 * [350] Intersection of Two Arrays II
 */
#include <bits/stdc++.h>
using namespace std;
// @lc code=start
class Solution {
public:
  vector<int> intersect(vector<int> &nums1, vector<int> &nums2) {
    map<int, int> m;
    vector<int> result;
    for (int i = 0; i < nums1.size(); i++) {
      m[nums1[i]]++;
    }
    for (int i = 0; i < nums2.size(); i++) {
      if (--m[nums2[i]] >= 0)
        result.push_back(nums2[i]);
    }
    return result;
  }
};
// @lc code=end
