/*
 * @lc app=leetcode id=9 lang=cpp
 *
 * [9] Palindrome Number
 */
#include <bits/stdc++.h>
using namespace std;
// @lc code=start
class Solution {
public:
  bool isPalindrome(int x) {
    string s = to_string(x);
    int n = s.size();
    for (int i = 0; i < n; i++) {
      if (s[i] == s[n - i - 1]) {
        continue;
      } else
        return false;
    }
    return true;
  }
};
// @lc code=end
