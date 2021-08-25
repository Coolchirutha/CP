/*
 * @lc app=leetcode id=1980 lang=cpp
 *
 * [1980] Find Unique Binary String
 */
#include <bits/stdc++.h>
using namespace std;
// @lc code=start
class Solution {
public:
  string findDifferentBinaryString(vector<string> &nums) {
    string result = "";
    int i = 0;
    for (string &s : nums) {
      result += ((s[i++] == '0') ? '1' : '0');
    }
    return result;
  }
};
// @lc code=end
