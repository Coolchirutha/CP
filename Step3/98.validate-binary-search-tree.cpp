/*
 * @lc app=leetcode id=98 lang=cpp
 *
 * [98] Validate Binary Search Tree
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
  stack<int> stk;
  void IST(TreeNode *root) {
    if (!root)
      return;
    IST(root->left);
    stk.push(root->val);
    IST(root->right);
  }
  bool isValidBST(TreeNode *root) {
    if (!root)
      return true;
    IST(root);
    int cur = stk.top();
    stk.pop();
    while (!stk.empty()) {
      if (cur <= stk.top()) {
        return false;
      }
      cur = stk.top();
      stk.pop();
    }
    return true;
  }
};
// @lc code=end
