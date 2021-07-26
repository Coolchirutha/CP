/*
 * @lc app=leetcode id=108 lang=cpp
 *
 * [108] Convert Sorted Array to Binary Search Tree
 */
#include <bits/stdc++.h>
using namespace std;

struct TreeNode {
  int val;
  TreeNode *left;
  TreeNode *right;
  TreeNode() : val(0), left(nullptr), right(nullptr) {}
  TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
  TreeNode(int x, TreeNode *left, TreeNode *right)
      : val(x), left(left), right(right) {}
};

// @lc code=start
class Solution {
  TreeNode *sortedArrayToBST(vector<int> &nums, int start, int end) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    if (end <= start)
      return NULL;
    int mid = (end + start) / 2;
    TreeNode *root = new TreeNode(nums[mid]);
    root->left = sortedArrayToBST(nums, start, mid);
    root->right = sortedArrayToBST(nums, mid + 1, end);
    return root;
  }

public:
  TreeNode *sortedArrayToBST(vector<int> &nums) {
    return sortedArrayToBST(nums, 0, nums.size());
  }
};
// @lc code=end
