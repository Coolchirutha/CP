/*
 * @lc app=leetcode id=33 lang=cpp
 *
 * [33] Search in Rotated Sorted Array
 */

// @lc code=start
class Solution
{
public:
  int search(vector<int> &nums, int target)
  {
    int left = 0, n=nums.size(),right = n - 1;

    // Finding index of smallest number using binary search.
    while (left < right)
    {
      int mid = (left + right) / 2;
      if (nums[mid] > nums[right])
        left = mid + 1;
      else
        right = mid;
    }

    // Now the point of pivot is the index of smallest value.
    int pivot = left;
    left = 0, right = n-1;

    // Now we can run normal binary search but while accounting for pivot.
    while(left<=right){
      int mid = (left+right)/2;
      // Think why %n is taken.
      int trueMid = (mid+pivot)%n;
      if(nums[trueMid]==target) return trueMid;
      if(nums[trueMid]<target)left=mid+1;
      else right = mid-1;
    }
    return -1;
  }
};
// @lc code=end
