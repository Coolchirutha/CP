/*
 * @lc app=leetcode id=121 lang=cpp
 *
 * [121] Best Time to Buy and Sell Stock
 */
// #include <bits/stdc++.h>
// using namespace std;
// @lc code=start
class Solution
{
public:
  int maxProfit(vector<int> &prices)
  {
    int result = 0, minima = INT_MAX;
    for (auto &i : prices)
    {
      minima = min(minima, i);
      result = max(result, i - minima);
    }
    return result;
  }
};
// @lc code=end
