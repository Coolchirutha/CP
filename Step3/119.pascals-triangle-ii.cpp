/*
 * @lc app=leetcode id=119 lang=cpp
 *
 * [119] Pascal's Triangle II
 */
#include <bits/stdc++.h>
using namespace std;
// @lc code=start
class Solution {
public:
  vector<int> getRow(int rowIndex) {
    vector<int> result(rowIndex + 1, 0);
    result[0] = 1;
    for (int i = 1; i <= rowIndex; i++) {
      for (int j = i; j >= 1; j--) {
        result[j] += result[j - 1];
      }
    }
    return result;
  }
};
// @lc code=end
