/*
 * @lc app=leetcode id=145 lang=cpp
 *
 * [145] Binary Tree Postorder Traversal
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
  vector<int> postorderTraversal(TreeNode *root) {
    vector<int> result;
    stack<TreeNode *> tasks;
    TreeNode *last = NULL;
    while (root || !tasks.empty()) {
      if (root) {
        tasks.push(root);
        root = root->left;
      } else {
        TreeNode *curNode = tasks.top();
        if (curNode->right && last != curNode->right) {
          root = curNode->right;
        } else {
          result.push_back(curNode->val);
          last = curNode;
          tasks.pop();
        }
      }
    }
    return result;
  }
};
// @lc code=end

class Solution {
public:
  vector<int> result;
  void callback(TreeNode *root) {
    if (root) {
      callback(root->left);
      callback(root->right);
      result.push_back(root->val);
    }
  }
  vector<int> postorderTraversal(TreeNode *root) {
    callback(root);
    return result;
  }
};
