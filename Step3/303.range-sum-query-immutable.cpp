/*
 * @lc app=leetcode id=303 lang=cpp
 *
 * [303] Range Sum Query - Immutable
 */
#include <bits/stdc++.h>
using namespace std;
// @lc code=start
class NumArray {
private:
  vector<int> hashMap;

public:
  NumArray(vector<int> &nums) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    hashMap.push_back(0);
    for (int i = 0; i < nums.size(); i++) {
      hashMap.push_back(hashMap.back() + nums[i]);
    }
  }

  int sumRange(int left, int right) {
    return hashMap[right + 1] - hashMap[left];
  }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(left,right);
 */
// @lc code=end
