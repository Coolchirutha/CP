/*
 * @lc app=leetcode id=48 lang=cpp
 *
 * [48] Rotate Image
 */
/*
  The logic here is that to rotate by 90 degrees right with constant space, we initially find the transpose of the matrix. Now we reverse the columns to give the answer.
  Visualization:
  Initially
  1  2  3  4  5
  6  7  8  9  10
  11 12 13 14 15
  16 17 18 19 20
  21 22 23 24 25

  Transposing:
  1  6  11 16 21
  2  7  12 17 22
  3  8  13 18 23
  4  9  14 19 24
  5  10 15 20 25

  Reversing the columns gives result.
  21 16 11 6  1
  22 17 12 7  2
  23 18 13 8  3
  24 19 14 9  4
  25 20 15 10 5
*/
#include <bits/stdc++.h>
using namespace std;
// @lc code=start
class Solution {
public:
  void rotate(vector<vector<int>> &matrix) {
    const int n = matrix.size();
    for (int i = 0; i < n; i++) {
      for (int j = 0; j < i; j++) {
        swap(matrix[i][j], matrix[j][i]);
      }
    }
    for (int i = 0; i < n; i++) {
      reverse(matrix[i].begin(), matrix[i].end());
    }
  }
};
// @lc code=end
