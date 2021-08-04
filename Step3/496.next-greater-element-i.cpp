/*
 * @lc app=leetcode id=496 lang=cpp
 *
 * [496] Next Greater Element I
 */
#include <bits/stdc++.h>
using namespace std;
// @lc code=start
class Solution {
public:
  vector<int> nextGreaterElement(vector<int> &nums1, vector<int> &nums2) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    stack<int> stk;
    unordered_map<int, int> m;
    for (auto &i : nums2) {
      while (stk.size() && stk.top() < i) {
        m[stk.top()] = i;
        stk.pop();
      }
      stk.push(i);
    }
    vector<int> result;
    for (int &i : nums1) {
      result.push_back(m.count(i) ? m[i] : -1);
    }
    return result;
  }
};
// @lc code=end
