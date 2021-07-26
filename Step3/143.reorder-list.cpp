/*
 * @lc app=leetcode id=143 lang=cpp
 *
 * [143] Reorder List
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
  void reorderList(ListNode *head) {
    if (!head)
      return;
    ListNode *p = head;
    ListNode *q = getMidNode(head);
    q = reverseList(q);
    mergeList(p, q);
  }

  ListNode *getMidNode(ListNode *head) {
    ListNode *slow = head, *fast = head;
    while (slow && fast && fast->next && fast->next->next) {
      slow = slow->next;
      fast = fast->next->next;
    }
    ListNode *mid = slow->next;
    slow->next = nullptr;
    return mid;
  }

  ListNode *reverseList(ListNode *root) {
    ListNode *prev = NULL, *next = root, *curr = root;
    while (curr) {
      next = curr->next;
      curr->next = prev;
      prev = curr;
      curr = next;
    }
    return prev;
  }

  void mergeList(ListNode *p, ListNode *q) {
    ListNode *tmp;
    while (q) {
      tmp = p->next;
      p->next = q;
      q = q->next;
      p = p->next;
      p->next = tmp;
      p = p->next;
    }
  }
};
// @lc code=end
