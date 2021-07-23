/*
 * @lc app=leetcode id=814 lang=cpp
 *
 * [814] Binary Tree Pruning
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
  TreeNode *pruneTree(TreeNode *root) {
    if (!root)
      return NULL;

    root->left = pruneTree(root->left);
    root->right = pruneTree(root->right);

    if (root->val == 0 && root->left == 0 && root->right == 0)
      return NULL;
    return root;
  }
};
// @lc code=end
