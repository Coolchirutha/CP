/*
 * @lc app=leetcode id=687 lang=cpp
 *
 * [687] Longest Univalue Path
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
  int result = 0;
  // This function returns the max path length of the root's left/right subtrees
  int dfs(TreeNode *root) {
    if (!root)
      return 0;
    int leftRes = dfs(root->left);
    int rightRes = dfs(root->right);
    int leftAdd = 0, rightAdd = 0;
    if (root->left && root->left->val == root->val) {
      leftAdd = leftRes + 1;
    }
    if (root->right && root->right->val == root->val) {
      rightAdd = rightRes + 1;
    }
    result = max(result, leftAdd + rightAdd);
    return max(leftAdd, rightAdd);
  }
  int longestUnivaluePath(TreeNode *root) {
    dfs(root);
    return result;
  }
};
// @lc code=end
