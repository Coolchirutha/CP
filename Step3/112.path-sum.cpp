/*
 * @lc app=leetcode id=112 lang=cpp
 *
 * [112] Path Sum
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
  bool hasPathSum(TreeNode *root, int target) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    if (!root) {
      return false;
    }

    if (root->val == target && root->left == NULL && root->right == NULL) {
      return true;
    }

    return hasPathSum(root->left, target - root->val) || hasPathSum(root->right, target - root->val);
  }
};
// @lc code=end
