/*
 * @lc app=leetcode id=1302 lang=cpp
 *
 * [1302] Deepest Leaves Sum
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
  int deepestLeavesSum(TreeNode *root) {
    if (!root)
      return 0;
    int result = 0, i;
    queue<TreeNode *> q;
    q.push(root);
    while (q.size()) {
      for (i = q.size() - 1, result = 0; i >= 0; i--) {
        TreeNode *cur = q.front();
        q.pop();
        result += cur->val;
        if (cur->right)
          q.push(cur->right);
        if (cur->left)
          q.push(cur->left);
      }
    }
    return result;
  }
};
// @lc code=end
