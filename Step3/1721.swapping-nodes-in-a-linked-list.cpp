/*
 * @lc app=leetcode id=1721 lang=cpp
 *
 * [1721] Swapping Nodes in a Linked List
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
  ListNode *swapNodes(ListNode *head, int k) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    if (!head || !head->next)
      return head;
    int size = 0;
    ListNode *itr = head;
    while (itr) {
      size++;
      itr = itr->next;
    }
    k %= size;
    if (size % 2) {
      if (((size + 1) / 2) == k) {
        return head;
      }
    }
    int i = 1;
    ListNode *itr1 = head, *itr2 = head;
    int tar1 = ((k == 0) ? 1 : k), tar2 = ((k == 0) ? size : (size - k) + 1);
    while (itr1) {
      if (i == tar1) {
        break;
      }
      itr1 = itr1->next;
      i++;
    }
    i = 1;
    while (itr2) {
      if (i == tar2) {
        break;
      }
      itr2 = itr2->next;
      i++;
    }
    i = itr1->val;
    itr1->val = itr2->val;
    itr2->val = i;
    return head;
  }
};
// @lc code=end
