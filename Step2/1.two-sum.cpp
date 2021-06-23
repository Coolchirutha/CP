#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
  vector<int> twoSum(vector<int> &nums, int target)
  {
    unordered_map<int, int> hashmap;
    vector<int> solution(2, 0);

    for (int i = 0; i < nums.size(); i++)
    {
      // If the element is not found in the hashmap then we add it
      if (hashmap.find(target - nums[i]) == hashmap.end())
      {
        hashmap.emplace(nums[i], i);
      }
      else
      {
        solution = {hashmap.find(target - nums[i])->second, i};
        return solution;
      }
    }
    return solution;
  }
};
