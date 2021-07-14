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
    map<char, int> hashMap;
    // Here result will be the maxLength of the substring, and start will
    // indicate
    //  the start of the max length of the substring initially initialized to
    //  -1.
    int result = 0, start = -1;
    for (int i = 0; i < s.size(); i++) {
      // If we find the current character already in the hashMap,
      // we restart the count by resetting the start position of
      // the substring to the duplicate's index and thereby creating a new
      // count.
      if (hashMap.count(s[i]) != 0) {
        start = max(start, hashMap[s[i]]);
      }

      // Updating the current character's latest location
      hashMap[s[i]] = i;

      // Updating the result if necessary.
      result = max(result, i - start);
    }
    return result;
  }
};
// @lc code=end
