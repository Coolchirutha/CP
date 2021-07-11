/*
 * @lc app=leetcode id=718 lang=cpp
 *
 * [718] Maximum Length of Repeated Subarray
 */
#include<bits/stdc++.h>
using namespace std;
// @lc code=start
class Solution {
public:
  int findLength(vector<int> &nums1, vector<int> &nums2) {
    int n = nums1.size(), m = nums2.size();
    int dp[n + 1][m + 1];
    int result = 0;
    for (int i = 0; i <= n; i++) {
      for (int j = 0; j <= m; j++) {
        if (i == 0 || j == 0)
          dp[i][j] = 0;
        else if (nums1[i - 1] == nums2[j - 1]) {
          dp[i][j] = dp[i - 1][j - 1] + 1;
          result =
              max(result, dp[i][j]);
        }
        else
          dp[i][j] = 0;
      }
    }
    return result;
  }
};
// @lc code=end
