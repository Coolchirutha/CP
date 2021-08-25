/*
 * @lc app=leetcode id=633 lang=cpp
 *
 * [633] Sum of Square Numbers
 */
#include <bits/stdc++.h>
using namespace std;
// @lc code=start
class Solution {
public:
  bool judgeSquareSum(int c) {
    if (c < 3)
      return true;
    long long int a = 0, b = sqrt(c);
    while (a <= b) {
      if ((a * a) + (b * b) == c) {
        return true;
      } else if ((a * a) + (b * b) < c) {
        a++;
      } else {
        b--;
      }
    }
    return false;
  }
};
// @lc code=end
