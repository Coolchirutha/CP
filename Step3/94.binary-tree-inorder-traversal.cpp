/*
 * @lc app=leetcode id=94 lang=cpp
 *
 * [94] Binary Tree Inorder Traversal
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
  vector<int> inorderTraversal(TreeNode *root) {
    vector<int> result;
    stack<TreeNode *> tasks;
    // While root exists or we have tasks to do.
    while (root || !tasks.empty()) {
      while (root) {
        // As long as itr exists we push root to tasks and go to leftmost.
        tasks.push(root);
        root = root->left;
      }
      root = tasks.top();
      tasks.pop();
      result.push_back(root->val);
      root = root->right;
    }
    return result;
  }
};
// @lc code=end

// Recursive approach
class Solution {
public:
  Solution() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
  }
  vector<int> result;
  void callback(TreeNode *root) {
    if (root) {
      callback(root->left);
      result.push_back(root->val);
      callback(root->right);
    }
  }
  vector<int> inorderTraversal(TreeNode *root) {
    callback(root);
    return result;
  }
};
