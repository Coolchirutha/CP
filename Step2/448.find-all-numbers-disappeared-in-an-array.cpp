/*
 * @lc app=leetcode id=448 lang=cpp
 *
 * [448] Find All Numbers Disappeared in an Array
 */

// @lc code=start
class Solution
{
public:
  vector<int> findDisappearedNumbers(vector<int> &nums)
  {
    int hashMap[1000000] = {0};
    vector<int> result;
    for (auto &i : nums)
      hashMap[i]++;
    for (int i = 1; i <= nums.size(); i++)
    {
      if(hashMap[i] == 0) result.push_back(i);
    }
    return result;
  }
};
// @lc code=end
