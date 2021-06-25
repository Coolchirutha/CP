/*
 * @lc app=leetcode id=46 lang=cpp
 *
 * [46] Permutations
 */

// @lc code=start
class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
      sort(nums.begin(),nums.end());
      vector<vector<int>> result;
      do{
        result.push_back(nums);
      }while(next_permutation(nums.begin(),nums.end()));
      return result;
    }
};
// @lc code=end

