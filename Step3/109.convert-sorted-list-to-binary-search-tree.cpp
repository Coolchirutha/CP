/*
 * @lc app=leetcode id=109 lang=cpp
 *
 * [109] Convert Sorted List to Binary Search Tree
 */
#include <bits/stdc++.h>
using namespace std;
struct ListNode {
  int val;
  ListNode *next;
  ListNode() : val(0), next(nullptr) {}
  ListNode(int x) : val(x), next(nullptr) {}
  ListNode(int x, ListNode *next) : val(x), next(next) {}
};
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
  TreeNode *construct(ListNode *left, ListNode *right) {
    if (left == right) {
      return NULL;
    }
    if (left->next == right) {
      TreeNode *root = new TreeNode(left->val);
      return root;
    }
    // Same as left + right / 2 but done to avoid overflow.
    ListNode *mid = left, *temp = left;
    // Finding middle element.
    while (temp != right && temp->next != right) {
      temp = temp->next->next;
      mid = mid->next;
    }
    TreeNode *root = new TreeNode(mid->val);
    root->left = construct(left, mid);
    root->right = construct(mid->next, right);
    return root;
  }
  TreeNode *sortedListToBST(ListNode *head) { return construct(head, NULL); }
};
// @lc code=end
