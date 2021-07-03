/*
 * @lc app=leetcode id=12 lang=cpp
 *
 * [12] Integer to Roman
 */
#include <bits/stdc++.h>
using namespace std;
// @lc code=start
class Solution {
public:
  string intToRoman(int num) {
    string result;
    string symbol[] = {"M",  "CM", "D",  "CD", "C",  "XC", "L",
                    "XL", "X",  "IX", "V",  "IV", "I"};
    int number[] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};

    for (int i = 0; num != 0; i++) {
      while (num >= number[i]) {
        num -= number[i];
        result += symbol[i];
      }
    }

    return result;
  }
};
// @lc code=end
