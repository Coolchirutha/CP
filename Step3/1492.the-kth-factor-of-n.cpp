/*
 * @lc app=leetcode id=1492 lang=cpp
 *
 * [1492] The kth Factor of n
 */
#include <bits/stdc++.h>
using namespace std;
// @lc code=start
class Solution {
public:
  int kthFactor(int n, int k) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    for (int i = 1; i <= n / 2; i++) {
      if (n % i == 0) {
        k--;
        if (!k)
          return i;
      }
    }
    if (k == 1)
      return n;
    return -1;
  }
};
// @lc code=end
