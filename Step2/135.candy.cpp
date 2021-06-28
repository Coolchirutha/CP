/*
 * @lc app=leetcode id=135 lang=cpp
 *
 * [135] Candy
 */
#include <bits/stdc++.h>
using namespace std;
// @lc code=start
class Solution
{
public:
  int candy(vector<int> &ratings)
  {
    int result = 0;
    int n = ratings.size();
    if (n <= 1)
      return n;
    vector<int> candy(n, 1);
    for (int i = 1; i < n; i++)
    {
      if (ratings[i] > ratings[i - 1])
        candy[i] = candy[i - 1] + 1;
    }
    for (int i = n - 1; i > 0; i--)
    {
      if (ratings[i - 1] > ratings[i])
        candy[i - 1] = max(candy[i] + 1, candy[i - 1]);
    }
    for (int i = 0; i < n; i++)
    {
      result += candy[i];
    }
    return result;
  }
};
// @lc code=end
