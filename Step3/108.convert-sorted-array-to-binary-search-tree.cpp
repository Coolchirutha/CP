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
public:
  TreeNode *construct(vector<int> nums, int left, int right) {
    if (left > right)
      return NULL;
    TreeNode *newNode = new TreeNode();
    if (left == right) {
      newNode->val = nums[left];
      newNode->left = NULL;
      newNode->right = NULL;
    } else {
      // This is same as left + right / 2 but it prevents overflow.
      int mid = left + (right - left) / 2;
      newNode->val = nums[mid];
      newNode->left = construct(nums, left, mid - 1);
      newNode->right = construct(nums, mid + 1, right);
    }
    return newNode;
  }
  TreeNode *sortedArrayToBST(vector<int> &nums) {
    if (nums.size() == 0) {
      return NULL;
    }
    return construct(nums, 0, nums.size() - 1);
  }
};
// @lc code=end
