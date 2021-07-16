/*
 * @lc app=leetcode id=611 lang=cpp
 *
 * [611] Valid Triangle Number
 */
#include <bits/stdc++.h>
using namespace std;
// @lc code=start
class Solution {
public:
  int triangleNumber(vector<int> &nums) {
    // A triangle has 3 sides which follow the rule of a + b > c, b + c > a, a +
    // c > b. If we sort the array and take 3 pointers, we know that the right
    // most element is the largest(or equal). Using this condition and
    // traversing through all the elements.
    int result = 0;
    // Array is sorted in increasing order.
    sort(nums.begin(), nums.end());
    for (int big = 2; big < nums.size(); big++) {
      // Taking smallest element as 1st element and mid element as just before
      // biggest, we iterate in this subarray and find the number of triangles
      // possible.
      int small = 0, mid = big - 1;
      while (small < mid) {
        if (nums[small] + nums[mid] > nums[big]) {
          // When the above condition satisfies, we can fix big and mid and take
          // all possible numbers below mid from small since they also pass the
          // necessary conditions.
          result += (mid - small);
          mid--;
        } else {
          // If small + mid is smaller, we try to increse the smaller value.
          small++;
        }
      }
    }
    return result;
  }
};
// @lc code=end
