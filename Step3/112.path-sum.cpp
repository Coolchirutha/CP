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
    if (!root)
      return false;
    if (root->left == NULL && root->right == NULL && target - root->val == 0) {
      return true;
    }
    return (hasPathSum(root->left, target - root->val) ||
            hasPathSum(root->right, target - root->val));
  }
};
// @lc code=end
class Solution {
public:
  bool hasPathSum(TreeNode *root, int target) {
    if (!root)
      return false;

    stack<TreeNode *> nodes;
    stack<int> sums;
    nodes.push(root);
    sums.push(target - root->val);
    while (!nodes.empty()) {
      TreeNode *cur = nodes.top();
      nodes.pop();
      int curSum = sums.top();
      sums.pop();
      if (cur->left == NULL && cur->right == NULL && curSum == 0) {
        return true;
      }
      if (cur->left) {
        nodes.push(cur->left);
        sums.push(curSum - cur->left->val);
      }
      if (cur->right) {
        nodes.push(cur->right);
        sums.push(curSum - cur->right->val);
      }
    }
    return false;
  }
};
