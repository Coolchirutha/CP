/*
 * @lc app=leetcode id=283 lang=cpp
 *
 * [283] Move Zeroes
 */

// @lc code=start
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
      vector<int> result;
      int zeroesCount= 0;
      for (int i = 0; i < nums.size(); i++)
      {
        if(!nums[i]){
          zeroesCount++;
        }else{
          result.push_back(nums[i]);
        }
      }
      while(zeroesCount--) result.push_back(0);
      nums = result;

    }
};
// @lc code=end

