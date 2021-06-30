/*
 * @lc app=leetcode id=123 lang=cpp
 *
 * [123] Best Time to Buy and Sell Stock III
 */
#include <bits/stdc++.h>
using namespace std;
// @lc code=start
class Solution
{
public:
  int maxProfit(vector<int> &prices)
  {
    if (!prices.size())
      return 0;
    int buy1 = INT_MAX, profit1 = INT_MIN, buy2 = INT_MAX, profit2 = INT_MIN;
    for (int i = 0; i < prices.size(); i++)
    {
      buy1 = min(buy1, prices[i]);
      profit1 = max(profit1, prices[i] - buy1);
      buy2 = min(buy2, prices[i] - profit1);
      profit2 = max(profit2, prices[i] - buy2);
    }
    return profit2;
  }
};
// @lc code=end
