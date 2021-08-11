/*
 * @lc app=leetcode id=438 lang=cpp
 *
 * [438] Find All Anagrams in a String
 */
#include <bits/stdc++.h>
using namespace std;
// @lc code=start
class Solution {
public:
  vector<int> findAnagrams(string s, string p) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    vector<int> result, map(26, 0);
    if (p.size() > s.size()) {
      return result;
    }
    for (char c : p) {
      map[c - 'a']++;
    }

    int left = 0, right = 0, curSize = p.size();
    while (right < s.size()) {
      // If right char exists in map, its a part of the anagram.
      if (map[s[right] - 'a'] >= 1) {
        // We increase the size of window, decrease curSize.
        curSize--;
      }
      map[s[right] - 'a']--;
      right++;

      // Once curSize is zero, we found an anagram.
      if (curSize == 0) {
        result.push_back(left);
      }

      //
      if ((right - left) == p.size()) {
        if (map[s[left] - 'a'] >= 0) {
          curSize++;
        }
        map[s[left] - 'a']++;
        left++;
      }
    }

    return result;
  }
};
// @lc code=end
