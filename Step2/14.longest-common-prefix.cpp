/*
 * @lc app=leetcode id=14 lang=cpp
 *
 * [14] Longest Common Prefix
 */
#include <bits/stdc++.h>
using namespace std;
// @lc code=start
class Solution {
public:
  string longestCommonPrefix(vector<string> &strs) {
    string result = "";

    if (strs.size() == 0)
      return result;

    for (int i = 0; i < strs[0].size(); i++) {

      int j = 1;
      for (; j < strs.size() && i < strs[j].size(); j++) {
        if (strs[j][i] != strs[0][i]) {
          return result;
        }
      }

      if (j == strs.size())
        result += strs[0][i];
    }
    return result;
  }
};
// @lc code=end
// class Solution {
// public:
//   string longestCommonPrefix(vector<string> &strs) {
//     string result = strs[0];
//     for (int i = 1; i < strs.size(); i++) {
//       string curWord = strs[i];
//       for (int j = 0; j < curWord.size() && j < result.size(); j++) {
//         if (curWord[j] != result[j]) {
//           // Cut the result from here
//           result = result.substr(0, j - 1);
//           break;
//         }
//       }
//     }
//     return result;
//   }
// };
