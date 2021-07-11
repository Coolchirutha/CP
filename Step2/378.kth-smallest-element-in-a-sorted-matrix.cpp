/*
 * @lc app=leetcode id=378 lang=cpp
 *
 * [378] Kth Smallest Element in a Sorted Matrix
 */
#include <bits/stdc++.h>
using namespace std;
// @lc code=start
class Solution {
public:
  int kthSmallest(vector<vector<int>> &matrix, int k) {
    priority_queue<int> pq;
    for (int i = 0; i < matrix.size(); i++) {
      for (int j = 0; j < matrix[0].size(); j++) {
        pq.push(matrix[i][j]);
      }
    }
    while (pq.size() != k)
      pq.pop();
    return pq.top();
  }
};
// @lc code=end
