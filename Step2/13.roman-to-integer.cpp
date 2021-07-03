/*
 * @lc app=leetcode id=13 lang=cpp
 *
 * [13] Roman to Integer
 */
#include <bits/stdc++.h>
using namespace std;
// @lc code=start
class Solution {
public:
  int romanToInt(string s) {
    int result = 0;
    for (int i = 0; i < s.length(); i++) {
      switch (s[i]) {
      case 'V':
        result += 5;
        break;
      case 'L':
        result += 50;
        break;
      case 'D':
        result += 500;
        break;
      case 'M':
        result += 1000;
        break;
      case 'I':
        if (i != s.length() - 1) {
          if (s[i + 1] == 'V') {
            result += 4;
            i++;
            break;
          }
          if (s[i + 1] == 'X') {
            result += 9;
            i++;
            break;
          }
        }
        result += 1;
        break;
      case 'X':
        if (i != s.length() - 1) {
          if (s[i + 1] == 'L') {
            result += 40;
            i++;
            break;
          }
          if (s[i + 1] == 'C') {
            result += 90;
            i++;
            break;
          }
        }
        result += 10;
        break;
      case 'C':
        if (i != s.length() - 1) {
          if (s[i + 1] == 'D') {
            result += 400;
            i++;
            break;
          }
          if (s[i + 1] == 'M') {
            result += 900;
            i++;
            break;
          }
        }
        result += 100;
        break;
      default:;
      }
    }
    return result;
  }
};
// @lc code=end
