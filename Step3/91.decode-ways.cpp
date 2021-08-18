/*
 * @lc app=leetcode id=91 lang=cpp
 *
 * [91] Decode Ways
 */
#include <bits/stdc++.h>
using namespace std;
// @lc code=start
class Solution {
public:
  Solution() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
  }
  // DP with constant space
  int numDecodings(string s) {
    int p = 1, pp, n = s.size();
    for (int i = n - 1; i >= 0; i--) {
      int cur = s[i] == '0' ? 0 : p;
      if (i < n - 1 && (s[i] == '1' || s[i] == '2' && s[i + 1] < '7'))
        cur += pp;
      pp = p;
      p = cur;
    }
    return s.empty() ? 0 : p;
  }
};
// @lc code=end
class Solution {
public:
  // Recursion O(2^n)
  int numDecodings(string s) { return s.empty() ? 0 : numDecodings(0, s); }
  int numDecodings(int p, string &s) {
    int n = s.size();
    if (p == n)
      return 1;
    if (s[p] == '0')
      return 0; // sub string starting with 0 is not a valid encoding
    int res = numDecodings(p + 1, s);
    if (p < n - 1 && (s[p] == '1' || (s[p] == '2' && s[p + 1] < '7')))
      res += numDecodings(p + 2, s);
    return res;
  }
};

class Solution {
public:
  // Memoization O(n)
  int numDecodings(string s) {
    int n = s.size();
    vector<int> mem(n + 1, -1);
    mem[n] = 1;
    return s.empty() ? 0 : num(0, s, mem);
  }
  int num(int i, string &s, vector<int> &mem) {
    if (mem[i] > -1)
      return mem[i];
    if (s[i] == '0')
      return mem[i] = 0;
    int res = num(i + 1, s, mem);
    if (i < s.size() - 1 && (s[i] == '1' || s[i] == '2' && s[i + 1] < '7'))
      res += num(i + 2, s, mem);
    return mem[i] = res;
  }
};

class Solution {
public:
  // dp O(n) time and space
  int numDecodings(string s) {
    int n = s.size();
    vector<int> dp(n + 1);
    dp[n] = 1;
    for (int i = n - 1; i >= 0; i--) {
      if (s[i] == '0')
        dp[i] = 0;
      else {
        dp[i] = dp[i + 1];
        if (i < n - 1 && (s[i] == '1' || s[i] == '2' && s[i + 1] < '7'))
          dp[i] += dp[i + 2];
      }
    }
    return s.empty() ? 0 : dp[0];
  }
};
