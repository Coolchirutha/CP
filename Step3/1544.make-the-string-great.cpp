/*
 * @lc app=leetcode id=1544 lang=cpp
 *
 * [1544] Make The String Great
 */
#include <bits/stdc++.h>
using namespace std;
// @lc code=start
class Solution {
public:
  string makeGood(string s) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    stack<char> sta;
    string result;
    for (int i = 0; i < s.size(); i++) {
      if (sta.empty()) {
        sta.push(s[i]);
      } else {
        if (abs(s[i] - sta.top()) == 32) {
          sta.pop();
        } else {
          sta.push(s[i]);
        }
      }
    }
    while (!sta.empty()) {
      result += sta.top();
      sta.pop();
    }
    reverse(result.begin(), result.end());
    return result;
  }
};
// @lc code=end
