/*
 * @lc app=leetcode id=917 lang=cpp
 *
 * [917] Reverse Only Letters
 */
#include <bits/stdc++.h>
using namespace std;
// @lc code=start
class Solution {
public:
  bool isChar(char c) {
    if (c >= 'a' && c <= 'z')
      return true;
    if (c >= 'A' && c <= 'Z')
      return true;
    return false;
  }
  string reverseOnlyLetters(string s) {
    stack<char> stk;
    for (int i = 0; i < s.size(); i++) {
      if (isChar(s[i])) {
        stk.push(s[i]);
      }
    }
    for (int i = 0; i < s.size(); i++) {
      if (!stk.empty() && isChar(s[i])) {
        char cur = stk.top();
        s[i] = cur;
        stk.pop();
      }
    }
    return s;
  }
};
// @lc code=end
