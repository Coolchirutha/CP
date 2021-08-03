/*
 * @lc app=leetcode id=32 lang=cpp
 *
 * [32] Longest Valid Parentheses
 */
#include <bits/stdc++.h>
using namespace std;
// @lc code=start
class Solution {
public:
  int longestValidParentheses(string s) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    stack<int> stk;
    stk.push(-1);
    int result = 0;
    for (int i = 0; i < s.size(); i++) {
      if (s[i] == '(') {
        stk.push(i);
      } else {
        stk.pop();
        if (stk.empty()) {
          stk.push(i);
        } else {
          result = max(result, i - stk.top());
        }
      }
    }
    return result;
  }
};
// @lc code=end
