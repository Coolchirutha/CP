/*
 * @lc app=leetcode id=79 lang=cpp
 *
 * [79] Word Search
 */
#include <bits/stdc++.h>
using namespace std;
// @lc code=start
class Solution
{
private:
  bool dfs(vector<vector<char>> &board, int i, int j, int count, string word)
  {
    if (count == word.length())
    {
      return true;
    }

    // Checking if i or j is out of limits
    // Also checking if the letter we are searching for is count
    if (i < 0 || i >= board.size() || j < 0 || j >= board[0].size() || board[i][j] != word[count])
    {
      return false;
    }

    // By now it is clear that we have board[i][j] == word[count]
    // Now, since the same cell may not be used more than once,
    // we keep the current cell as empty and continue
    char temp = board[i][j];
    board[i][j] = ' ';
    bool found = dfs(board, i + 1, j, count + 1, word) || dfs(board, i - 1, j, count + 1, word) || dfs(board, i, j + 1, count + 1, word) || dfs(board, i, j - 1, count + 1, word);

    board[i][j] = temp;
    return found;
  }

public:
  bool exist(vector<vector<char>> &board, string word)
  {
    int curLetterIndex = 0;
    // Basically going through every letter and getting the answer
    for (int i = 0; i < board.size(); i++)
    {
      for (int j = 0; j < board[0].size(); j++)
      {
        // when we find the first letter we call the dfs algo to see if we find the rest of the word
        if (board[i][j] == word[curLetterIndex] && dfs(board, i, j, 0, word))
        {
          return true;
        }
      }
    }
    return false;
  }
};
// @lc code=end
