/*
 * @lc app=leetcode id=34 lang=cpp
 *
 * [34] Find First and Last Position of Element in Sorted Array
 */

// @lc code=start
class Solution
{
public:
  vector<int> searchRange(vector<int> &nums, int target)
  {
    // Solution using double binary search
    vector<int> result(2, -1);
    if (nums.empty() or nums.back() < target or nums.front() > target)
      return result;

    // First we find the lower bound for the target by using binary search
    int left = 0, right = nums.size() - 1;
    while (left < right)
    {
      int mid = (left + right) / 2;
      if (nums[mid] < target)
        left = mid + 1;
      else
        right = mid;
    }
    if (nums[left] != target)
      return result;
    result[0] = left;
    // Then we find the upper bound by using a binary search again
    right = nums.size() - 1;
    while (left < right)
    {
      int mid = ((left + right) / 2) + 1;
      if (nums[mid] > target)
        right = mid - 1;
      else
        left = mid;
    }

    result[1] = right;

    return result;
  }
};
// Solution using cpp std
// class Solution
// {
// public:
//   vector<int> searchRange(vector<int> &nums, int target)
//   {
//     vector<int> result(2,-1);
//     if(nums.empty() or nums.back()<target or nums.front() > target) return result;
//     int left,right;
//     left = lower_bound(nums.begin(),nums.end(),target)-nums.begin();
//     if(nums[left]!=target) return result;
//     right = upper_bound(nums.begin(),nums.end(),target)-nums.begin();
//     result[0] = left;
//     result[1] = right-1;
//     return result;
//   }
// };
// @lc code=end
