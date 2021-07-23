/*
 * @lc app=leetcode id=17 lang=cpp
 *
 * [17] Letter Combinations of a Phone Number
 */
#include <bits/stdc++.h>
using namespace std;
// @lc code=start
class Solution {
public:
  vector<string> letterCombinations(string digits) {
    if(!digits.size()) return {};
    vector<string> result;
    result.push_back("");
    map<char, string> digimap;
    digimap = {{'2', "abc"}, {'3', "def"},  {'4', "ghi"}, {'5', "jkl"},
           {'6', "mno"}, {'7', "pqrs"}, {'8', "tuv"}, {'9', "wxyz"}};
    for (int i = 0; i < digits.size(); ++i) {
      // 0 and 1 are empty and need not be added.
      if (digits[i] < '2' || digits[i] > '9') {
        continue;
      }
      string cur = digimap[digits[i]];
      vector<string> tmp;
      // Going through every letter in digimap and adding to result.
      for (int j = 0; j < cur.size(); ++j) {
        for (int k = 0; k < result.size(); ++k) {
          tmp.push_back(result[k] + cur[j]);
        }
      }
      result = tmp;
    }
    return result;
  }
};
// @lc code=end
