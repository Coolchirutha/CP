/*
 * @lc app=leetcode id=144 lang=cpp
 *
 * [144] Binary Tree Preorder Traversal
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
  Solution() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
  }
  vector<int> preorderTraversal(TreeNode *root) {
    vector<int> result;
    stack<TreeNode *> s;
    while (root || !s.empty()) {
      if (root) {
        result.push_back(root->val);
        if (root->right) {
          s.push(root->right);
        }
        root = root->left;
      } else {
        root = s.top();
        s.pop();
      }
    }
    return result;
  }
};
// @lc code=end
