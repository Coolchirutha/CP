/*
 * @lc app=leetcode id=107 lang=cpp
 *
 * [107] Binary Tree Level Order Traversal II
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
  vector<vector<int>> levelOrderBottom(TreeNode *root) {
    vector<vector<int>> result;
    vector<int> curLvl;
    if (!root)
      return result;
    queue<TreeNode *> q;
    int curCount = 1;
    q.push(root);
    while (!q.empty()) {
      TreeNode *cur = q.front();
      curCount--;
      q.pop();
      if (cur->left)
        q.push(cur->left);
      if (cur->right)
        q.push(cur->right);
      curLvl.push_back(cur->val);
      if (curCount == 0) {
        curCount = q.size();
        result.push_back(curLvl);
        curLvl.clear();
      }
    }
    return vector<vector<int>>(result.rbegin(), result.rend());
  }
};
// @lc code=end
