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
  void findPaths(TreeNode *node, int target, vector<int> &path,
                 vector<vector<int>> &result) {
    if (!node)
      return;
    path.push_back(node->val);
    if (node->val == target && !node->right && !node->left) {
      result.push_back(path);
    }
    findPaths(node->left, target - node->val, path, result);
    findPaths(node->right, target - node->val, path, result);
    path.pop_back();
  }

public:
  vector<vector<int>> pathSum(TreeNode *root, int target) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    vector<vector<int>> result;
    vector<int> path;
    findPaths(root, target, path, result);
    return result;
  }
};
// @lc code=end
