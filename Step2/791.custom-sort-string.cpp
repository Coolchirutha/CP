/*
 * @lc app=leetcode id=791 lang=cpp
 *
 * [791] Custom Sort String
 */
#include <bits/stdc++.h>
using namespace std;
// @lc code=start
class Solution {
public:
  string customSortString(string order, string str) {
    vector<int> hashMap(26, 0);
    for (auto &ch : str)
      hashMap[ch - 'a']++;
    string result;
    for (int i = 0; i < order.size(); i++) {
      while (hashMap[order[i] - 'a']--) {
        result += order[i];
      }
    }
    for (int i = 0; i < 26; i++) {
      while (hashMap[i] > 0) {
        result += i + 'a';
        hashMap[i]--;
      }
    }
    return result;
  }
};
// @lc code=end
