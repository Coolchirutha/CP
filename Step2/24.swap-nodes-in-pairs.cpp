/*
 * @lc app=leetcode id=24 lang=cpp
 *
 * [24] Swap Nodes in Pairs
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

// @lc code=start
class Solution {
public:
  ListNode *swapPairs(ListNode *head) {
    if (head == NULL || head->next == NULL)
      return head;
    ListNode *right = head->next;
    head->next = swapPairs(right->next);
    right->next = head;
    return right;
  }
};
// @lc code=end
