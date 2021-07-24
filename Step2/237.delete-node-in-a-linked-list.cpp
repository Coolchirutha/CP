/*
 * @lc app=leetcode id=237 lang=cpp
 *
 * [237] Delete Node in a Linked List
 */
#include <bits/stdc++.h>
using namespace std;
struct ListNode {
  int val;
  ListNode *next;
  ListNode(int x) : val(x), next(NULL) {}
};

// @lc code=start
class Solution {
public:
  void deleteNode(ListNode *node) {
    ListNode *next = node->next;
    node->next = next->next;
    node->val = next->val;
  }
};
// @lc code=end
