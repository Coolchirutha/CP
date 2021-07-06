/*
 * @lc app=leetcode id=1338 lang=cpp
 *
 * [1338] Reduce Array Size to The Half
 */
#include <bits/stdc++.h>
using namespace std;
// @lc code=start
class Solution {
public:
  int minSetSize(vector<int> &arr) {
    map<int, int> mp;
    vector<int> count;
    int result = 0, sum = 0;

    for (int i : arr)
      mp[i]++;

    for (auto [a, b] : mp)
      count.push_back(b);

    sort(count.begin(),count.end(),greater<int>());

    for (int i = 0; i < count.size() && sum * 2 < arr.size() ; i++)
    {
      sum += count[i];
      result++;
    }


    return result;
  }
};
// @lc code=end
