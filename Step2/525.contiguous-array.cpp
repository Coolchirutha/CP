/*
 * @lc app=leetcode id=525 lang=cpp
 *
 * [525] Contiguous Array
 */
#include <bits/stdc++.h>
using namespace std;
// @lc code=start
class Solution {
public:
  int findMaxLength(vector<int> &nums) {
    // I solved this problem similar to problem #713. Here we add 1 to
    // cumulative sum when element is 1 and remove 1 when it's 0. We observe
    // when cumulative sum of two indexes are same then there are equal number
    // of zeroes and ones. We also initialize the sum to be zero at index -1.
    int result = 0, curSum = 0;
    // map to store curSum and index.
    unordered_map<int, int> cumulativeSum;
    cumulativeSum.insert({0, -1});
    for (int i = 0; i < nums.size(); i++) {
      curSum += (nums[i] ? 1 : -1);
      if (!cumulativeSum.count(curSum)) {
        cumulativeSum.insert({curSum, i});
      }
      result = max(result, i - cumulativeSum[curSum]);
    }
    return result;
  }
};
// @lc code=end
