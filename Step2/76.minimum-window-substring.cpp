/*
 * @lc app=leetcode id=76 lang=cpp
 *
 * [76] Minimum Window Substring
 */
#include <bits/stdc++.h>
using namespace std;
// @lc code=start
class Solution
{
public:
  string minWindow(string s, string t)
  {
    if (s.size() == 0 || t.size() == 0)
      return "";

    vector<int> remaining(128, 0);
    int required = t.size();
    for (int i = 0; i < required; i++)
      remaining[t[i]]++;

    int min = INT_MAX, start = 0, left = 0, end = 0;

    while (end <= s.size() && start < s.size())
    {
      if (required)
      {
        if (end == s.size())
          break;
        remaining[s[end]]--;

        if (remaining[s[end]] >= 0)
          required--;

        end++;
      }
      else
      {
        if (end - start < min)
        {
          min = end - start;
          left = start;
        }

        remaining[s[start]]++;

        if (remaining[s[start]] > 0)
          required++;

        start++;
      }
    }
    return min == INT_MAX ? "" : s.substr(left, min);
  }
};
// @lc code=end
