/*
 * @lc app=leetcode id=131 lang=cpp
 *
 * [131] Palindrome Partitioning
 */
#include <bits/stdc++.h>
using namespace std;
// @lc code=start
class Solution {
public:
  vector<vector<string>> partition(string s) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    vector<vector<string>> result;

    vector<string> curPart;
    dfs(0, s, curPart, result);
    return result;
  }
  void dfs(int curIndex, string &s, vector<string> &curPart,
           vector<vector<string>> &result) {
    if (curIndex == s.size()) {
      result.push_back(curPart);
      return;
    }
    for (int i = curIndex; i < s.size(); i++) {
      if (isPal(s, curIndex, i)) {
        curPart.push_back(s.substr(curIndex, i - curIndex + 1));
        dfs(i + 1, s, curPart, result);
        curPart.pop_back();
      }
    }
  }
  bool isPal(const string &s, int start, int end) {
    while (start <= end) {
      if (s[start++] != s[end--]) {
        return false;
      }
    }
    return true;
  }
};
// @lc code=end
