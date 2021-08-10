/*
 * @lc app=leetcode id=926 lang=cpp
 *
 * [926] Flip String to Monotone Increasing
 */
#include <bits/stdc++.h>
using namespace std;
// @lc code=start
class Solution {
public:
  int minFlipsMonoIncr(string s) {
    int count0 = 0, count1 = 0;
    for (auto c : s) {
      if (c == '1')
        count1++;
      else
        count0++;

      // Here we should see if we need to flip the current zeroes to ones or
      // flip all prev ones to zeroes. We are ignoring leading zeroes in count0
      count0 = min(count0, count1);
    }
    return count0;
  }
};
// @lc code=end
