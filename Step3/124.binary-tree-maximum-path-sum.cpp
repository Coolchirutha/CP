/*
 * @lc app=leetcode id=124 lang=cpp
 *
 * [124] Binary Tree Maximum Path Sum
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
  int result = INT_MIN;
  int maxGain(TreeNode *node) {
    if (!node)
      return 0;
    int left = max(maxGain(node->left), 0);
    int right = max(maxGain(node->right), 0);
    int curSum = node->val + right + left;
    result = max(result, curSum);
    return node->val + max(left, right);
  }
  int maxPathSum(TreeNode *root) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    maxGain(root);
    return result;
  }
};
// @lc code=end
