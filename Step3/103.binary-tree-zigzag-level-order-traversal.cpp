/*
 * @lc app=leetcode id=103 lang=cpp
 *
 * [103] Binary Tree Zigzag Level Order Traversal
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
  vector<vector<int>> zigzagLevelOrder(TreeNode *root) {
    vector<vector<int>> result;
    if (!root)
      return result;
    vector<int> curLvl;
    int curCount = 1, curDepth = 1;
    queue<TreeNode *> q;
    q.push(root);
    while (!q.empty()) {
      TreeNode *cur = q.front();
      q.pop();
      curCount--;
      if (cur->left)
        q.push(cur->left);
      if (cur->right)
        q.push(cur->right);
      curLvl.push_back(cur->val);
      if (curCount == 0) {
        curCount = q.size();
        if (!(curDepth % 2)) {
          result.push_back(vector<int>(curLvl.rbegin(), curLvl.rend()));
        } else {
          result.push_back(curLvl);
        }
        curLvl.clear();
        curDepth++;
      }
    }
    return result;
  }
};
// @lc code=end
