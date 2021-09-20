/*
 * @lc app=leetcode id=110 lang=cpp
 *
 * [110] Balanced Binary Tree
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
  int depth(TreeNode *root) {
    if (!root)
      return 0;
    return max(depth(root->left), depth(root->right)) + 1;
  }
  bool isBalanced(TreeNode *root) {
    if (!root)
      return true;
    int lDepth = depth(root->left);
    int rDepth = depth(root->right);
    return abs(lDepth - rDepth) <= 1 && isBalanced(root->left) &&
           isBalanced(root->right);
  }
};
// @lc code=end
