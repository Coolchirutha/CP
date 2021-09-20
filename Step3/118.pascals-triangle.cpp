/*
 * @lc app=leetcode id=118 lang=cpp
 *
 * [118] Pascal's Triangle
 */
#include <bits/stdc++.h>
using namespace std;
// @lc code=start
class Solution {
public:
  vector<vector<int>> generate(int numRows) {
    vector<vector<int>> result;
    for (int i = 0; i < numRows; i++) {
      vector<int> row(i + 1, 1);
      for (int j = 1; j < i; j++) {
        row[j] = result[i - 1][j] + result[i - 1][j - 1];
      }
      result.push_back(row);
    }
    return result;
  }
};
// @lc code=end
