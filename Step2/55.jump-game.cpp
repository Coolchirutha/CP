/*
 * @lc app=leetcode id=55 lang=cpp
 *
 * [55] Jump Game
 */
#include <bits/stdc++.h>
using namespace std;
// @lc code=start
class Solution
{
public:
  bool canJump(vector<int> &nums)
  {
    int i = 0, maxJump = 0, n = nums.size();
    for (; i < n & i <= maxJump; i++)
    {
      maxJump = max(nums[i] + i, maxJump);
    }
    return i == n;
  }
};
// class Solution
// {
// public:
//   bool canJump(vector<int> &nums)
//   {
//     int maxIndex = 0, size = nums.size();

//     if (size == 1)
//       return true;

//     for (int i = 0; i <= maxIndex; i++)
//     {
//       if (nums[i] + i >= maxIndex)
//       {
//         if (nums[i] + i >= size - 1)
//           return true;
//         else
//           maxIndex = nums[i] + i;
//       }
//     }

//     return false;
//   }
// };
// @lc code=end
