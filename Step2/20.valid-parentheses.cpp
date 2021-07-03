/*
 * @lc app=leetcode id=20 lang=cpp
 *
 * [20] Valid Parentheses
 */
#include <bits/stdc++.h>
using namespace std;
// @lc code=start
class Solution {
public:
  bool isValid(string s) {
    stack<char> test;
    for (char &c : s) {
      switch (c) {
      case '(':
      case '{':
      case '[':
        test.push(c);
        break;
      case ')':
        if (test.empty() || test.top() != '(')
          return false;
        else
          test.pop();
        break;
      case '}':
        if (test.empty() || test.top() != '{')
          return false;
        else
          test.pop();
        break;
      case ']':
        if (test.empty() || test.top() != '[')
          return false;
        else
          test.pop();
        break;
      default:;
      }
    }
    return test.empty();
  }
};
// @lc code=end
