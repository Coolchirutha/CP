/*
 * @lc app=leetcode id=49 lang=cpp
 *
 * [49] Group Anagrams
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
  vector<vector<string>> groupAnagrams(vector<string> &strs) {
    unordered_map<string, vector<string>> m;
    for (string s : strs) {
      string temp = s;
      sort(temp.begin(), temp.end());
      m[temp].push_back(s);
    }
    vector<vector<string>> result;
    for (auto ele : m) {
      result.push_back(ele.second);
    }
    return result;
  }
};
// @lc code=end
