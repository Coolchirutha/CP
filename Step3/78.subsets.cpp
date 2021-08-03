/*
 * @lc app=leetcode id=78 lang=cpp
 *
 * [78] Subsets
 */
/*
  Take array as [1, 2, 3]
  Initially ,assume that the array is empty, we get only 1 subset (i.e. {}), now
  we add each element and find all pertinent subsets. Now adding 1, the subsets
  are [[], [1]]. Now adding 2, the subsets are [[], [1], [2], [1,2]] Finally
  adding 3, subsets are [[],[1],[2],[3],[1,2],[1,3],[2,3],[1,2,3]]

  So basically we are duplicating the existing subsets and adding the current
  element we are adding to the array to each subsets to get the final result of
  all subsets.
*/
#include <bits/stdc++.h>
using namespace std;
// @lc code=start
class Solution {
public:
  vector<vector<int>> subsets(vector<int> &nums) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    vector<vector<int>> result(1, vector<int>());
    sort(nums.begin(), nums.end());
    for (int i = 0; i < nums.size(); i++) {
      int n = result.size();
      for (int j = 0; j < n; j++) {
        result.push_back(result[j]);
        result.back().push_back(nums[i]);
      }
    }

    return result;
  }
};
// @lc code=end
