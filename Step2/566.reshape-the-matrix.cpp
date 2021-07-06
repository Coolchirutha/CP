/*
 * @lc app=leetcode id=566 lang=cpp
 *
 * [566] Reshape the Matrix
 */
#include <bits/stdc++.h>
using namespace std;
// @lc code=start
class Solution {
public:
  vector<vector<int>> matrixReshape(vector<vector<int>> &mat, int r, int c) {
    if ((mat.size() * mat[0].size()) != (r * c))
      return mat;
    vector<vector<int>> result(r, vector<int>(c));
    vector<int> linear;

    for (int i = 0; i < mat.size(); i++) {
      for (int j = 0; j < mat[0].size(); j++) {
        linear.push_back(mat[i][j]);
      }
    }

    int cur = 0;
    for (int i = 0; i < r; i++) {
      for (int j = 0; j < c; j++) {
        result[i][j] = linear[cur++];
      }
    }

    return result;
  }
};
// @lc code=end
