/*
 * @lc app=leetcode id=1161 lang=cpp
 *
 * [1161] Maximum Level Sum of a Binary Tree
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
  int maxLevelSum(TreeNode *root) {
    if (!root)
      return 0;
    int maxCount = INT_MIN, curLevel = 1, result = 0, curFlag = 1, curCount = 0;
    queue<TreeNode *> q;
    q.push(root);
    while (!q.empty()) {
      TreeNode *cur = q.front();
      if (cur->left)
        q.push(cur->left);
      if (cur->right)
        q.push(cur->right);
      curCount += cur->val;
      curFlag--;
      q.pop();
      if (curFlag == 0) {
        if (curCount > maxCount) {
          result = curLevel;
          maxCount = curCount;
        }
        curLevel++;
        curCount = 0;
        curFlag = q.size();
      }
    }
    return result;
  }
};
// @lc code=end
