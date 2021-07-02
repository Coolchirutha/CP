/*
 * @lc app=leetcode id=51 lang=cpp
 *
 * [51] N-Queens
 */
#include <bits/stdc++.h>
using namespace std;
// @lc code=start
class Solution {
public:
  vector<vector<string>> result;
  bool isValid(vector<string> &board, int row, int col) {

    // Checking the current column for any existing queens
    for (int i = row; i >= 0; i--) {
      if (board[i][col] == 'Q') {
        return false;
      }
    }

    // Checking diagonally left for any existing queens
    for (int i = row, j = col; i >= 0 && j >= 0; i--, j--) {
      if (board[i][j] == 'Q') {
        return false;
      }
    }

    // Checking diagonally right for any existing queens
    for (int i = row, j = col; i >= 0 && j < board.size(); i--, j++) {
      if (board[i][j] == 'Q') {
        return false;
      }
    }
    return true;
  }

  void search(vector<string> &board, int row) {
    if (row == board.size()) {
      result.push_back(board);
      return;
    }

    for (int i = 0; i < board.size(); i++) {
      if (isValid(board, row, i)) {
        board[row][i] = 'Q';
        search(board, row + 1);
        board[row][i] = '.';
      }
    }
  }

  vector<vector<string>> solveNQueens(int n) {
    if (n <= 0) {
      return {{}};
    }
    vector<string> board(n, string(n, '.'));
    search(board, 0);
    return result;
  }
};
// @lc code=end
