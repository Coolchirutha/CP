/*
 * @lc app=leetcode id=132 lang=cpp
 *
 * [132] Palindrome Partitioning II
 */
#include <bits/stdc++.h>
using namespace std;
// @lc code=start
class Solution {
public:
  vector<int> dp;
  vector<vector<bool>> palin;
  string s;
  int minCut(string s) {
    this->s = s;
    dp.resize(s.size(), -1);
    palin.resize(s.size(), vector<bool>(s.size(), 0));
    for (int i = 0; i < s.size(); i++) {
      isPal(i, i);
      isPal(i, i + 1);
    }
    return f(0) - 1;
  }

  int f(int i) {
    if (i == s.size())
      return 0;
    if (dp[i] != -1)
      return dp[i];
    int ans = INT_MAX;
    for (int j = i; j < s.size(); j++) {
      if (palin[i][j])
        ans = min(ans, 1 + f(j + 1));
    }
    return dp[i] = ans;
  }

  void isPal(int start, int end) {
    if (start < 0 or end >= s.size())
      return;
    if (s[start] == s[end])
      palin[start][end] = 1, isPal(start - 1, end + 1);
  }
};
// @lc code=end
