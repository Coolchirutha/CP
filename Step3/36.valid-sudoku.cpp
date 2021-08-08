/*
 * @lc app=leetcode id=36 lang=cpp
 *
 * [36] Valid Sudoku
 */
/*
  Here the idea is that we simply loop through the 2D array while adding the
  traversed elements into 3 hashmaps.

  The trick is at curBox = i / 3 * 3 + j / 3;
  Visualization of k:
  0  0  0 | 1  1  1 | 2  2  2
  0  0  0 | 1  1  1 | 2  2  2
  0  0  0 | 1  1  1 | 2  2  2
  --------+---------+---------
  3  3  3 | 4  4  4 | 5  5  5
  3  3  3 | 4  4  4 | 5  5  5
  3  3  3 | 4  4  4 | 5  5  5
  --------+----------+--------
  6  6  6 | 7  7  7 | 8  8  8
  6  6  6 | 7  7  7 | 8  8  8
  6  6  6 | 7  7  7 | 8  8  8
*/
#include <bits/stdc++.h>
using namespace std;
// @lc code=start
class Solution {
public:
  bool isValidSudoku(vector<vector<char>> &board) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    map<pair<int, int>, int> rMap, cMap, subMap;
    for (int i = 0; i < board.size(); i++) {
      for (int j = 0; j < board[0].size(); j++) {
        if (board[i][j] != '.') {
          int cur = board[i][j] - '0';
          int curBox = i / 3 * 3 + j / 3;
          if (rMap.count(make_pair(i, cur)) || cMap.count(make_pair(j, cur)) ||
              subMap.count(make_pair(curBox, cur))) {
            return false;
          }
          rMap[make_pair(i, cur)]++;
          cMap[make_pair(j, cur)]++;
          subMap[make_pair(curBox, cur)]++;
        }
      }
    }
    return true;
  }
};
// @lc code=end
