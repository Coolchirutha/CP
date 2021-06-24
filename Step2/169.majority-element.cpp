/*
 * @lc app=leetcode id=169 lang=cpp
 *
 * [169] Majority Element
 */

// @lc code=start
// class Solution
// {
// public:
//   int majorityElement(vector<int> &nums)
//   {
//     // My solution
//     int result, maxCount = INT_MIN;
//     map<int, int> hashMap;
//     for (auto &i : nums)
//     {
//       auto cur = hashMap.find(i);
//       if (cur != hashMap.end())
//       {
//         cur->second++;
//       } else{
//         hashMap.emplace(i,1);
//       }
//     }
//     for (auto i : hashMap)
//     {
//       if (maxCount < i.second)
//       {
//         maxCount = i.second;
//         result = i.first;
//       }
//     }
//     return result;
//   }
// };
class Solution
{
public:
  int majorityElement(vector<int> &nums)
  {
    // Moore's Voting Algorithm
    int votes = 0, majority;
    for (auto &i: nums)
    {
      if (!votes)
      {
        majority = i;
      }
      votes += i == majority ? 1 : -1;
    }
    return majority;
  }
};
// @lc code=end
