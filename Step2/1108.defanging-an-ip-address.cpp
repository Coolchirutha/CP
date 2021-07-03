/*
 * @lc app=leetcode id=1108 lang=cpp
 *
 * [1108] Defanging an IP Address
 */
#include <bits/stdc++.h>
using namespace std;
// @lc code=start
class Solution {
public:
  string defangIPaddr(string address) {
    string result = "";
    for (char &c : address) {
      if (c == '.') {
        result += "[.]";
      } else
        result += c;
    }
    return result;
  }
};
// @lc code=end
