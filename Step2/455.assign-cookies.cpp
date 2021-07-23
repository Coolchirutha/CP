/*
 * @lc app=leetcode id=455 lang=cpp
 *
 * [455] Assign Cookies
 */
#include <bits/stdc++.h>
using namespace std;
// @lc code=start
class Solution {
public:
  int findContentChildren(vector<int> &greed, vector<int> &score) {
    sort(greed.begin(), greed.end());
    sort(score.begin(), score.end());
    int childIndex = 0, cookieIndex = 0;
    while (childIndex < greed.size() && cookieIndex < score.size()) {
      if (score[cookieIndex] >= greed[childIndex])
        childIndex++;
      cookieIndex++;
    }
    return childIndex;
  }
};
// @lc code=end
