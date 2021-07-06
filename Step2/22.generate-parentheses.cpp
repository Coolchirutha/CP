/*
 * @lc app=leetcode id=22 lang=cpp
 *
 * [22] Generate Parentheses
 */
#include <bits/stdc++.h>
using namespace std;
// @lc code=start
class Solution {
public:
  void addPar(vector<string> &result, string s, int n, int open, int close) {
    // Base case is when we reach the necessary string length
    if (s.length() == n * 2) {
      result.push_back(s);
      return;
    }

    // Until we add all opening braces, we keep on adding to the result
    if (open < n)
      addPar(result, s + "(", n, open + 1, close);

    // As long as number of closing braces are less than opening braces, we can
    // add a closing brace.
    if (close < open)
      addPar(result, s + ")", n, open, close + 1);
  }
  vector<string> generateParenthesis(int n) {
    vector<string> result;

    // Here addPar will take in current string, result, n, number of opening and
    // closing braces added till now.
    addPar(result, "", n, 0, 0);
    return result;
  }
};
// @lc code=end
