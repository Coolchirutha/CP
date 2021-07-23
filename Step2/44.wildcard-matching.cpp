/*
 * @lc app=leetcode id=44 lang=cpp
 *
 * [44] Wildcard Matching
 */
#include <bits/stdc++.h>
using namespace std;
// @lc code=start
class Solution {
public:
  bool isMatch(string s, string p) {
    int sLen = s.length(), pLen = p.length();
    // Taking 2 iterators to traverse string and pattern
    int sItr = 0, pItr = 0;
    // Last match tracks latest match of character after *.
    // starPos tracks the latest position of last *.
    int last_match = -1, starPos = -1;


    // Looping through the string
    while (sItr < sLen) {
      // If the characters match or pattern has '?' we skip the letters.
      if (pItr < pLen && (s[sItr] == p[pItr] || p[pItr] == '?')) {
        sItr++;
        pItr++;
      } else if (pItr < pLen && p[pItr] == '*') {
        // If we find a star we store the latest star position and move through
        // the pattern but not the string.
        starPos = pItr;
        pItr++;
        last_match = sItr;
      } else if (starPos != -1) {
        // Here we come when the letters don't match but we have a star.
        // We reset the pattern iterator to just after star and skip the
        // selected character to see if we can find another matching character.
        pItr = starPos + 1;
        last_match++;
        sItr = last_match;
      } else
        return false;
    }
    // We iterate until we run out of stars or end of pattern
    while (p[pItr] == '*' && pItr < pLen)
      pItr++;
    // If end of pattern is reached: success, else failure.
    return pItr == pLen;
  }
};
// @lc code=end
