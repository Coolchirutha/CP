/*
 * @lc app=leetcode id=1614 lang=cpp
 *
 * [1614] Maximum Nesting Depth of the Parentheses
 */
#include <bits/stdc++.h>
using namespace std;
// @lc code=start
class Solution {
public:
  int maxDepth(string s) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int result = 0, curDepth = 0;
    stack<char> sta;
    for (int i = 0; i < s.size(); i++) {
      if (s[i] == '(') {
        sta.push('(');
        curDepth++;
        result = max(result, curDepth);
      } else if (s[i] == ')') {
        sta.pop();
        curDepth--;
        result = max(result, curDepth);
      }
    }
    return result;
  }
};
// @lc code=end
