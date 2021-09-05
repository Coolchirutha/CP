/*
 * @lc app=leetcode id=114 lang=cpp
 *
 * [114] Flatten Binary Tree to Linked List
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
  void flatten(TreeNode *root) {
    if (!root)
      return;
    stack<TreeNode *> stk;
    stk.push(root);
    while (!stk.empty()) {
      TreeNode *cur = stk.top();
      stk.pop();
      if (cur->right)
        stk.push(cur->right);
      if (cur->left)
        stk.push(cur->left);
      if (!stk.empty())
        cur->right = stk.top();
      cur->left = NULL;
    }
    return;
  }
};
// @lc code=end
