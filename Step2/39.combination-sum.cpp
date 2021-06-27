/*
 * @lc app=leetcode id=39 lang=cpp
 *
 * [39] Combination Sum
 */
#include <bits/stdc++.h>
using namespace std;

// @lc code=start
class Solution
{
private:
  void algo(vector<int>& nums, int curTarget, int curIndex, vector<int>& curArr, vector<vector<int>>& result)
  {
    // ***Read the combinationSum function below and come back here***
    // Concept behind recursion:
    // Every element has 2 choices, select or don't select so basically, we
    // brute force through all element's possibilities until we reach curTarget or pass

    // When currentTarget is 0 it means the currentArray is a solution so we push it to the result
    if (curTarget == 0)
    {
      result.push_back(curArr);
      return;
    }

    // When currentIndex reaches nums.size() or the number is greater than curTarget then its not a solution
    if (curIndex == nums.size() || curTarget - nums[curIndex] < 0)
    {
      return;
    }

    // Since there are 2 cases for an array element(we pick it or leave it),
    // Here we first test the true case by adding the
    // element to currentArray and subtracting it from target
    curArr.push_back(nums[curIndex]);
    algo(nums, curTarget - nums[curIndex], curIndex, curArr, result);

    // Now we test the false case by skipping the element
    // and testing the next index
    curArr.pop_back();
    algo(nums, curTarget, curIndex + 1, curArr, result);
  }

public:
  vector<vector<int>> combinationSum(vector<int> &nums, int target)
  {
    vector<vector<int>> result;
    vector<int> curArr;
    int curIndex = 0;
    // Here we go through a recursive approach while tracking multiple items.
    // Items tracked are : currentIndex, currentArray and curTarget.

    // First we sort the algorithm to ignore values greater than
    // the target during recursion and to go from minumum to maximum.
    sort(nums.begin(), nums.end());

    // Now we call the recursive function to modify the global value of result
    algo(nums, target, curIndex, curArr, result);

    // Returning result.
    return result;
  }
};
// @lc code=end
