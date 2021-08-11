/*
 * @lc app=leetcode id=954 lang=cpp
 *
 * [954] Array of Doubled Pairs
 */
#include <bits/stdc++.h>
using namespace std;
// @lc code=start
class Solution {
public:
  bool canReorderDoubled(vector<int> &arr) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    unordered_map<int, int> m;
    for (int i : arr) {
      m[i]++;
    }

    vector<int> vect;
    for (auto itr : m) {
      vect.push_back(itr.first);
    }

    sort(vect.begin(), vect.end(),
         [](int i, int j) { return abs(i) < abs(j); });
    for (int i : vect) {
      if (m[i] > m[2 * i])
        return false;
      m[2 * i] -= m[i];
    }
    return true;
  }
};
// @lc code=end
