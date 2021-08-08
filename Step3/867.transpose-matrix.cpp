/*
 * @lc app=leetcode id=867 lang=cpp
 *
 * [867] Transpose Matrix
 */
#include <bits/stdc++.h>
using namespace std;
// @lc code=start
class Solution {
public:
  vector<vector<int>> transpose(vector<vector<int>> &matrix) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int m = matrix.size(), n = matrix[0].size();
    vector<vector<int>> result(n, vector<int>(m, 0));
    for (int i = 0; i < m; i++) {
      for (int j = 0; j < matrix[0].size(); j++) {
        result[j][i] = matrix[i][j];
      }
    }
    return result;
  }
};
// @lc code=end
