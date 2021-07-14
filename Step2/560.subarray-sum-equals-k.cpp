/*
 * @lc app=leetcode id=560 lang=cpp
 *
 * [560] Subarray Sum Equals K
 */
#include <bits/stdc++.h>
using namespace std;
// @lc code=start
class Solution {
public:
  int subarraySum(vector<int> &nums, int target) {
    // The logic of this question is that we iterate over each element and store
    // the cumulative sum upto ith element in a map. Now assume curSum upto p
    // elements is x and upto p + q elements is x + k. From these two cases we
    // can see that sum from pth element to (p + q)th element is k(which is the
    // target). So we keep track 2 elements here, the current cumulative
    // sum(being the key in the map) and the count of it.
    int result = 0, curSum = 0;
    unordered_map<int, int> cumulativeSumCount;
    // Here we are initializing the initial sum as 0.
    cumulativeSumCount.insert({0, 1});
    for (int i = 0; i < nums.size(); i++) {
      // Calculating current cumulative sum
      curSum += nums[i];

      // If cumSum = x and curSum = x - k both exist then we increment count by the number of occurrences of x - k.
      if (cumulativeSumCount.count(curSum - target)) {
        result += cumulativeSumCount[curSum - target];
      }

      // Adding the current cumulative sum if necessary.
      if (cumulativeSumCount.count(curSum)) {
        cumulativeSumCount[curSum]++;
      } else {
        cumulativeSumCount.insert({curSum, 1});
      }
    }
    return result;
  }
};
// @lc code=end
