/*
 * @lc app=leetcode id=53 lang=cpp
 *
 * [53] Maximum Subarray
 */
// #include<bits/stdc++.h>
// using namespace std;
// @lc code=start
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
      int result = nums[0], curSum = 0;
      for(auto &i: nums){
        curSum += i;
        result = max(result,curSum);
        curSum = max(0,curSum);
      }
      return result;
    }
};
// @lc code=end

