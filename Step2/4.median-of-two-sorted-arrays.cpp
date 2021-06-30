/*
 * @lc app=leetcode id=4 lang=cpp
 *
 * [4] Median of Two Sorted Arrays
 */
#include <bits/stdc++.h>
using namespace std;
// @lc code=start
class Solution
{
public:
  double findMedianSortedArrays(vector<int> &nums1, vector<int> &nums2)
  {
    // Full solution : https://www.youtube.com/watch?v=NTop3VTjmxk
    if (nums1.size() > nums2.size())
    {
      // Keeping nums1 to be the smallest array
      return findMedianSortedArrays(nums2, nums1);
    }
    int n1 = nums1.size(), n2 = nums2.size();
    int low = 0, high = n1;

    while (low <= high)
    {
      int cut1 = (low + high) / 2;
      int cut2 = (n1 + n2 + 1) / 2 - cut1;

      // Here int_min and int_max are for when we have 0 elements on left or all elements on right
      double left1 = ((cut1 == 0) ? INT_MIN : nums1[cut1 - 1]);
      double left2 = ((cut2 == 0) ? INT_MIN : nums2[cut2 - 1]);

      double right1 = ((cut1 == n1) ? INT_MAX : nums1[cut1]);
      double right2 = ((cut2 == n2) ? INT_MAX : nums2[cut2]);

      if (left1 <= right2 && left2 <= right1)
      {
        // We found the answer since we fulfilled the conditions
        // If count of combined array is odd we return center element
        // If it's even we return avg of center 2 elements
        if ((n1 + n2) % 2 == 0)
        {
          return (max(left1, left2) + min(right1, right2)) / 2.0;
        }
        else
          return max(left1, left2);
      }
      else if (left1 > left2)
        high = cut1 - 1;
      else
        low = cut1 + 1;
    }

    return 0.0;
  }
};
// @lc code=end
