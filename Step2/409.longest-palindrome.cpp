/*
 * @lc app=leetcode id=409 lang=cpp
 *
 * [409] Longest Palindrome
 */
#include <bits/stdc++.h>
using namespace std;
// @lc code=start
class Solution {
public:
  int longestPalindrome(string s) {
    bool flag = false;
    int result = 0;
    unordered_map<char, int> m;
    for (auto &c : s) {
      if (m.count(c)) {
        m[c]++;
      } else {
        m.insert({c, 1});
      }
    }
    for (auto i : m) {
      if (i.second % 2 && !flag) {
        flag = true;
      }
      result += i.second / 2;
    }
    result *= 2;
    result += (flag ? 1 : 0);
    return result;
  }
};
// @lc code=end
