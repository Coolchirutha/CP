/*
 * @lc app=leetcode id=102 lang=cpp
 *
 * [102] Binary Tree Level Order Traversal
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
  vector<vector<int>> levelOrder(TreeNode *root) {
    vector<vector<int>> result;
    if (!root) {
      return result;
    }
    queue<TreeNode *> q;
    q.push(root);
    vector<int> curRow;
    int count = 1;
    while (!q.empty()) {
      // Process every element in the current queue and add the children
      // of the current queue into the queue.
      if (q.front()->left) {
        q.push(q.front()->left);
      }
      if (q.front()->right) {
        q.push(q.front()->right);
      }
      curRow.push_back(q.front()->val);
      q.pop();
      count--;
      // Keep doing this until the level number of elements are dequeued.
      if (count == 0) {
        result.push_back(curRow);
        curRow.clear();
        count = q.size();
      }
    }
    return result;
  }
};
// @lc code=end
