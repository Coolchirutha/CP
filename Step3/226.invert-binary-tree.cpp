/*
 * @lc app=leetcode id=226 lang=cpp
 *
 * [226] Invert Binary Tree
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
  TreeNode *invertTree(TreeNode *root) {
    if (root) {
      invertTree(root->left);
      invertTree(root->right);
      swap(root->left, root->right);
    }
    return root;
  }
};
// @lc code=end
class Solution {
public:
  TreeNode *invertTree(TreeNode *root) {
    if (!root)
      return root;
    int i;
    queue<TreeNode *> q;
    TreeNode *cur;
    q.push(root);
    while (q.size()) {
      for (i = q.size(); i > 0; i--) {
        cur = q.front();
        q.pop();
        swap(cur->right, cur->left);
        if (cur->right)
          q.push(cur->right);
        if (cur->left)
          q.push(cur->left);
      }
    }
    return root;
  }
};
