/*
 * @lc app=leetcode id=90 lang=cpp
 *
 * [90] Subsets II
 */
/*
  Logic is same as 78.Subsets

  Take array as [1, 2, 3]
  Initially ,assume that the array is empty, we get only 1 subset (i.e. {}), now
  we add each element and find all pertinent subsets. Now adding 1, the subsets
  are [[], [1]]. Now adding 2, the subsets are [[], [1], [2], [1,2]] Finally
  adding 3, subsets are [[],[1],[2],[3],[1,2],[1,3],[2,3],[1,2,3]]

  So basically we are duplicating the existing subsets and adding the current
  element we are adding to the array to each subsets to get the final result of
  all subsets.

  But the main difference is that when we encounter duplicates, we simply do not
  reset the value of left pointer to 0 rather leave it at the index where we
  finished the oldest duplicate. This ensures that [1,2] doesn't appear twice
  but skips the ones it has added to already.
*/
#include <bits/stdc++.h>
using namespace std;
// @lc code=start
class Solution {
public:
  vector<vector<int>> subsetsWithDup(vector<int> &nums) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    sort(nums.begin(), nums.end());
    vector<vector<int>> result;
    result.push_back({});

    int left;
    for (int i = 0; i < nums.size(); i++) {
      if (i == 0 || nums[i] != nums[i - 1]) {
        left = 0;
      }
      for (int right = result.size(); left < right; left++) {
        vector<int> clone = result[left];
        clone.push_back(nums[i]);
        // Here the move function saves additional space and simply allocates
        // the preallocated memory for clone variable when push_back is done.
        result.push_back(move(clone));
      }
    }
    return result;
  }
};
// @lc code=end
