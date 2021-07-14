/*
 * @lc app=leetcode id=3 lang=cpp
 *
 * [3] Longest Substring Without Repeating Characters
 */
#include <bits/stdc++.h>
using namespace std;
// @lc code=start
class Solution {
public:
  int lengthOfLongestSubstring(string s) {
    // Assigning all ASCII characters a -1 value.
    // We initialize a result of 0 and a start of -1.
    vector<int> hashMap(256, -1);
    int result = 0, start = -1;
    for (int i = 0; i < s.size(); i++) {
      // If hashmap[s[i]] is not start, we
      if (hashMap[s[i]] > start) {
        start = hashMap[s[i]];
      }
      hashMap[s[i]] = i;
      result = max(result, i - start);
    }
    return result;
  }
};
// @lc code=end
