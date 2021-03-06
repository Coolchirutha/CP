/*
 * @lc app=leetcode id=546 lang=cpp
 *
 * [546] Remove Boxes
 */
#include <bits/stdc++.h>
using namespace std;
// @lc code=start
// https://leetcode.com/problems/remove-boxes/discuss/1402561/C%2B%2BJavaPython-Top-down-DP-Clear-explanation-with-Picture-Clean-and-Concise
class Solution {
public:
  Solution() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
  }
  int memo[200][200][200] = {};
  int removeBoxes(vector<int> &boxes) {
    return dp(boxes, 0, boxes.size() - 1, 0);
  }
  int dp(vector<int> &boxes, int l, int r, int k) {
    if (l > r)
      return 0;
    if (memo[l][r][k] > 0)
      return memo[l][r][k];
    int lOrg = l, kOrg = k;

    while (l + 1 <= r && boxes[l] == boxes[l + 1]) {
      l += 1;
      k += 1;
    }
    int ans = (k + 1) * (k + 1) + dp(boxes, l + 1, r, 0);
    for (int m = l + 1; m <= r; ++m)
      if (boxes[m] == boxes[l])
        ans = max(ans, dp(boxes, m, r, k + 1) + dp(boxes, l + 1, m - 1, 0));
    return memo[lOrg][r][kOrg] = ans;
  }
};
// @lc code=end
