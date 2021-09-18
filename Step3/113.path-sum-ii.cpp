/*
 * @lc app=leetcode id=113 lang=cpp
 *
 * [113] Path Sum II
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
private:
  void findPaths(TreeNode *curNode, int target, vector<int> &curPath,
                 vector<vector<int>> &result) {
    if (!curNode)
      return;

    curPath.push_back(curNode->val);

    if (target == curNode->val && !curNode->left && !curNode->right) {
      result.push_back(curPath);
    }

    findPaths(curNode->left, target - curNode->val, curPath, result);
    findPaths(curNode->right, target - curNode->val, curPath, result);
    curPath.pop_back();
  }

public:
  vector<vector<int>> pathSum(TreeNode *root, int target) {
    vector<vector<int>> result;
    if (!root)
      return result;
    vector<int> curPath;
    findPaths(root, target, curPath, result);
    return result;
  }
};
// @lc code=end
