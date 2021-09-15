/*
 * @lc app=leetcode id=978 lang=cpp
 *
 * [978] Longest Turbulent Subarray
 */
#include <bits/stdc++.h>
using namespace std;
// @lc code=start
class Solution {
public:
  int maxTurbulenceSize(vector<int> &arr) {
    if (arr.size() == 1)
      return 1;
    int result = INT_MIN, cur = 1, flag;
    flag = (arr[0] > arr[1]) ? 0 : 1;
    for (int i = 0; i < arr.size() - 1; i++) {
      if (!flag && arr[i] > arr[i + 1]) {
        cur++;
        flag = !flag;
      } else if (flag && arr[i] < arr[i + 1]) {
        cur++;
        flag = !flag;
      } else if (arr[i] == arr[i + 1]) {
        result = max(result, cur);
        cur = 1;
      } else {
        result = max(result, cur);
        cur = 2;
      }
    }
    result = max(result, cur);
    return result;
  }
};
// @lc code=end
