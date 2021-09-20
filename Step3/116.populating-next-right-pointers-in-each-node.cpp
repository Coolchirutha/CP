/*
 * @lc app=leetcode id=116 lang=cpp
 *
 * [116] Populating Next Right Pointers in Each Node
 */
#include <bits/stdc++.h>
using namespace std;
class Node {
public:
  int val;
  Node *left;
  Node *right;
  Node *next;

  Node() : val(0), left(NULL), right(NULL), next(NULL) {}

  Node(int _val) : val(_val), left(NULL), right(NULL), next(NULL) {}

  Node(int _val, Node *_left, Node *_right, Node *_next)
      : val(_val), left(_left), right(_right), next(_next) {}
};
// @lc code=start
class Solution {
public:
  Node *connect(Node *root) {
    if (!root)
      return root;
    queue<Node *> q;
    q.push(root);
    int curCount = 1;
    Node *prev = NULL;
    while (!q.empty()) {
      Node *cur = q.front();
      q.pop();
      curCount--;
      cur->next = prev;
      if (cur->right)
        q.push(cur->right);
      if (cur->left)
        q.push(cur->left);
      prev = cur;
      if (!curCount) {
        curCount = q.size();
        prev = NULL;
      }
    }
    return root;
  }
};
// @lc code=end
