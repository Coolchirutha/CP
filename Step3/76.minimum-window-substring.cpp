/*
 * @lc app=leetcode id=76 lang=cpp
 *
 * [76] Minimum Window Substring
 */
#include <bits/stdc++.h>
using namespace std;
// @lc code=start
class Solution {
public:
  Solution() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
  }
  string minWindow(string s, string t) {

    vector<int> map(128, 0);
    for (auto c : t)
      map[c]++;
    int counter = t.size(), begin = 0, end = 0, d = INT_MAX, head = 0;
    while (end < s.size()) {
      if (map[s[end++]]-- > 0)
        counter--;           // in t
      while (counter == 0) { // valid
        if (end - begin < d)
          d = end - (head = begin);
        if (map[s[begin++]]++ == 0)
          counter++; // make it invalid
      }
    }
    return d == INT_MAX ? "" : s.substr(head, d);
  }
};
// @lc code=end
