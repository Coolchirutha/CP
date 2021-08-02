/*
 * @lc app=leetcode id=844 lang=cpp
 *
 * [844] Backspace String Compare
 */
#include <bits/stdc++.h>
using namespace std;
// @lc code=start
class Solution {
public:
  bool stackCompare(stack<char> a, stack<char> b) {
    if (a.size() != b.size())
      return false;
    int n = a.size();
    while (!a.empty()) {
      if (a.top() != b.top()) {
        return false;
      }
      a.pop();
      b.pop();
    }
    return true;
  }
  bool backspaceCompare(string s, string t) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    stack<char> s1, s2;
    for (int i = 0; i < s.size(); i++) {
      if (s[i] == '#') {
        if (s1.empty()) {
          continue;
        } else {
          s1.pop();
        }
      } else {
        s1.push(s[i]);
      }
    }
    for (int i = 0; i < t.size(); i++) {
      if (t[i] == '#') {
        if (s2.empty()) {
          continue;
        } else {
          s2.pop();
        }
      } else {
        s2.push(t[i]);
      }
    }
    return stackCompare(s1, s2);
  }
};
// @lc code=end
