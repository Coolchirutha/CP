/*
 * @lc app=leetcode id=821 lang=cpp
 *
 * [821] Shortest Distance to a Character
 */
#include <bits/stdc++.h>
using namespace std;
// @lc code=start
class Solution {
public:
  vector<int> shortestToChar(string s, char c) {
    int n = s.size(), nearestCIndex = -n;
    vector<int> result(n, n);
    for (int i = 0; i < n; i++) {
      if (s[i] == c) {
        nearestCIndex = i;
      }
      result[i] = i - nearestCIndex;
    }

    for (int i = nearestCIndex - 1; i >= 0; i--) {
      if (s[i] == c) {
        nearestCIndex = i;
      }
      result[i] = min(result[i], nearestCIndex - i);
    }
    return result;
  }
};
// @lc code=end
