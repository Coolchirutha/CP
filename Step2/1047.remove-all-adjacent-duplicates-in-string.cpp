/*
 * @lc app=leetcode id=1047 lang=cpp
 *
 * [1047] Remove All Adjacent Duplicates In String
 */
#include <bits/stdc++.h>
using namespace std;
// @lc code=start
class Solution
{
public:
  string removeDuplicates(string s)
  {
    string result;
    result.push_back(s[0]);
    for (int i = 1; i < s.length(); i++)
      (s[i] == result.back()) ? result.pop_back() : result.push_back(s[i]);
    return result;
  }
};
// @lc code=end
