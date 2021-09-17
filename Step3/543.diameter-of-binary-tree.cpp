/*
 * @lc app=leetcode id=543 lang=cpp
 *
 * [543] Diameter of Binary Tree
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
  int height(TreeNode *root) {
    if (!root)
      return 0;
    int result = 0;
    queue<TreeNode *> q;
    q.push(root);
    int curCount = 1;
    while (!q.empty()) {
      TreeNode *temp = q.front();
      if (temp->left) {
        q.push(temp->left);
      }
      if (temp->right) {
        q.push(temp->right);
      }
      curCount--;
      q.pop();
      if (curCount == 0) {
        result++;
        curCount = q.size();
      }
    }
    return result;
  }
  int diameterOfBinaryTree(TreeNode *root) {
    if (!root) {
      return 0;
    }
    int lHeight = height(root->left);
    int rHeight = height(root->right);
    int lDia = diameterOfBinaryTree(root->left);
    int rDia = diameterOfBinaryTree(root->right);
    return max(lHeight + rHeight, max(lDia, rDia));
  }
};
// @lc code=end
