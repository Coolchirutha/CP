/*
 * @lc app=leetcode id=1022 lang=cpp
 *
 * [1022] Sum of Root To Leaf Binary Numbers
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
  int dfs(TreeNode *root, int curSum) {
    if (!root)
      return 0;

    curSum = (curSum << 1) | root->val;

    if (!root->left && !root->right) {
      return curSum;
    }
    return dfs(root->left, curSum) + dfs(root->right, curSum);
  }
  int sumRootToLeaf(TreeNode *root) { return dfs(root, 0); }
};
// @lc code=end
