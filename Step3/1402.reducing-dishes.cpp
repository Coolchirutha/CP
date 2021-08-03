/*
 * @lc app=leetcode id=1402 lang=cpp
 *
 * [1402] Reducing Dishes
 */
#include <bits/stdc++.h>
using namespace std;
// @lc code=start
class Solution {
public:
  int maxSatisfaction(vector<int> &A) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    sort(A.begin(), A.end());
    int res = 0, total = 0, n = A.size();
    for (int i = n - 1; i >= 0 && A[i] > -total; --i) {
      total += A[i];
      res += total;
    }
    return res;
  }
};
// @lc code=end
