/*
 * @lc app=leetcode id=89 lang=cpp
 *
 * [89] Gray Code
 */
#include <bits/stdc++.h>
using namespace std;
// @lc code=start
class Solution
{
public:
  vector<int> grayCode(int n)
  {
    // Size of result array is 2^n;
    vector<int> result(1 << n);
    // From int i = 0 to i < 2^n
    for (int i = 0; i < (1 << n); i++)
    {
      // The element's XOR with it's bitwise right shift will give
      // the necessary shifted element
      result[i] = i ^ (i >> 1);
    }
    return result;
  }
};
// @lc code=end
