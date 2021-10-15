/*
 * @lc app=leetcode id=662 lang=cpp
 *
 * [662] Maximum Width of Binary Tree
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
  map<int, int> left;
  void getWidth(TreeNode *root, int depth, int pos) {
    if (!root)
      return;
  }
  int widthOfBinaryTree(TreeNode *root) {
    int result = 0;
    getWidth(root, 0, 0);
  }
};
// @lc code=end
