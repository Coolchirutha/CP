/*
 * @lc app=leetcode id=111 lang=cpp
 *
 * [111] Minimum Depth of Binary Tree
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
  int minDepth(TreeNode *root) {
    if (!root)
      return 0;
    queue<TreeNode *> q;
    q.push(root);
    int curCount = 1, result = 1, curLevel = 1;
    while (!q.empty()) {
      TreeNode *cur = q.front();
      q.pop();
      if (!cur->right && !cur->left) {
        result = curLevel;
        return result;
      }
      if (cur->right)
        q.push(cur->right);
      if (cur->left)
        q.push(cur->left);
      curCount--;
      if (!curCount) {
        curCount = q.size();
        curLevel++;
      }
    }
    return result;
  }
};
// @lc code=end
