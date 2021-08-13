/*
 * @lc app=leetcode id=73 lang=cpp
 *
 * [73] Set Matrix Zeroes
 */
#include <bits/stdc++.h>
using namespace std;
// @lc code=start
class Solution {
public:
  Solution() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
  }
  void setZeroes(vector<vector<int>> &matrix) {
    vector<int> row(matrix.size(), 0), col(matrix[0].size(), 0);
    for (int i = 0; i < matrix.size(); i++) {
      for (int j = 0; j < matrix[0].size(); j++) {
        if (!matrix[i][j]) {
          row[i] = 1;
          col[j] = 1;
        }
      }
    }
    for (int i = 0; i < matrix.size(); i++) {
      bool flag = false;
      if (row[i])
        flag = true;
      for (int j = 0; j < matrix[0].size(); j++) {
        if (flag || col[j]) {
          matrix[i][j] = 0;
        }
      }
    }
  }
};
// @lc code=end
