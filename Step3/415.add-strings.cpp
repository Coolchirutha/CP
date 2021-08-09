/*
 * @lc app=leetcode id=415 lang=cpp
 *
 * [415] Add Strings
 */
#include <bits/stdc++.h>
using namespace std;
// @lc code=start
class Solution {
public:
  string addStrings(string num1, string num2) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // support variables
    int i = 0, maxSize = 1 + max(num1.size(), num2.size()), sum = 0;
    string res(maxSize, '0');
    // parsing the input
    while (i++ < maxSize) {
      sum = (i <= num1.size() ? num1[num1.size() - i] - 48 : 0) +
            (i <= num2.size() ? num2[num2.size() - i] - 48 : 0) + sum % 10;
      res[maxSize - i] = sum % 10 + 48;
      sum /= 10;
    }
    if (res[0] == '0')
      res = res.substr(1);
    return res;
  }
};
// @lc code=end
