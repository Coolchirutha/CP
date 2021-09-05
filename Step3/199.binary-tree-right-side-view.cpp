/*
 * @lc app=leetcode id=199 lang=cpp
 *
 * [199] Binary Tree Right Side View
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
  vector<int> rightSideView(TreeNode *root) {
    vector<int> result;
    if (!root)
      return result;
    queue<TreeNode *> q;
    q.push(root);
    int i;
    while (q.size()) {
      for (i = q.size(); i > 0; i--) {
        TreeNode *cur = q.front();
        q.pop();
        if (i == 1)
          result.push_back(cur->val);
        if (cur->left)
          q.push(cur->left);
        if (cur->right)
          q.push(cur->right);
      }
    }
    return result;
  }
};
// @lc code=end
