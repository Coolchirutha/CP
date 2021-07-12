/*
 * @lc app=leetcode id=205 lang=cpp
 *
 * [205] Isomorphic Strings
 */
#include <bits/stdc++.h>
using namespace std;
// @lc code=start
class Solution {
public:
  bool isIsomorphic(string s, string t) {
    char sMap[128] = {0};
    char tMap[128] = {0};

    for (int i = 0; i < s.length(); i++) {
      if (sMap[s[i]] != tMap[t[i]])
        return false;
      sMap[s[i]] = i + 1;
      tMap[t[i]] = i + 1;
    }
    return true;
  }
};
// @lc code=end
