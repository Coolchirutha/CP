/*
 * @lc app=leetcode id=15 lang=cpp
 *
 * [15] 3Sum
 */
// #include<bits/stdc++.h>
// using namespace std;
// @lc code=start
class Solution
{
public:
  vector<vector<int>> threeSum(vector<int> &nums)
  {
    vector<vector<int>> result;

    // Sorting the vector
    sort(nums.begin(), nums.end());

    for (int i = 0; i < nums.size(); i++)
    {
      // Trying to get the negative of nums[i] to get result as zero
      int target = -nums[i];

      // ignoring the left of nums[i] we directly check the right of nums[i]
      int left = i + 1, right = nums.size() - 1;
      while (left < right)
      {
        int curSum = nums[right] + nums[left];

        // If current sum is less than necessary then we need to move left pointer forward
        // else we move the right pointer backward
        // When we reach the target we push to result
        if (curSum < target)
        {
          left++;
        }
        else if (curSum > target)
        {
          right--;
        }
        else
        {
          vector<int> aSolution = {nums[i], nums[left], nums[right]};
          result.push_back(aSolution);

          // Now there can be another solution with nums[i]
          // but different values of nums[left] and nums[right].
          // To get those solution we first need to eliminate the duplicates of nums[left] & nums[right]
          while (left < right && nums[left] == aSolution[1])
            left++;
          while (left < right && nums[right] == aSolution[2])
            right--;
        }
      }
      // Eliminating duplicates of nums[i]
      while (i + 1 < nums.size() && nums[i + 1] == nums[i])
        i++;
    }

    return result;
  }
};
// @lc code=end
