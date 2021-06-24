/*
 * @lc app=leetcode id=31 lang=cpp
 *
 * [31] Next Permutation
 */
// @lc code=start
class Solution
{
public:
  void nextPermutation(vector<int> &nums)
  {
    int k = -1;
    int n = nums.size();
    for (auto i = 0; i < n - 1; ++i)
    {
      if (nums[i] < nums[i + 1])
        k = i;
    }
    if (k == -1)
    {
      sort(nums.begin(), nums.end());
      return;
    }
    int l = k + 1;
    for (auto i = l; i < n; ++i)
    {
      if (nums[k] < nums[i])
        l = i;
    }
    swap(nums[k], nums[l]);
    ++k;
    --n;
    while (k < n)
    {
      swap(nums[k++], nums[n--]);
    }
  }
};
// @lc code=end
