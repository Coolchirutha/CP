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
    while (root) {
      if (root->left) {
        // Searching for the right-most leaf in the left sub-tree of root.
        TreeNode *itr = root->left;
        while (itr->right && itr->right != root) {
          itr = itr->right;
        }
        if (!itr->right) {
          // If right doesn't exist we set it to root and print val and go to
          // the left subtree to traverse it first.
          itr->right = root;
          result.push_back(root->val);
          root = root->left;
        } else {
          // Comes here when itr->right == root. This means lef traversal is
          // done and now right traversal has to take place.
          itr->right = NULL;
          root = root->right;
        }
      } else {
        // When root doesn't have a left subtree, we print cur and go right.
        result.push_back(root->val);
        root = root->right;
      }
    }
    return result;
  }
};
// @lc code=end

// Using stack
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
