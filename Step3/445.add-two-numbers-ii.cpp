/*
 * @lc app=leetcode id=445 lang=cpp
 *
 * [445] Add Two Numbers II
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
  Solution() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
  }

  ListNode *reverseLL(ListNode *head) {
    if (!head || !head->next)
      return head;

    ListNode *prev = NULL, *cur = head;
    while (cur) {
      ListNode *temp = cur->next;
      cur->next = prev;
      prev = cur;
      cur = temp;
    }
    return prev;
  }

  ListNode *addTwoNumbers(ListNode *l1, ListNode *l2) {
    l1 = reverseLL(l1);
    l2 = reverseLL(l2);
    ListNode preHead(0);
    ListNode *itr = &preHead;
    int carry = 0;
    while (l1 || l2 || carry) {
      if (l1) {
        carry += l1->val;
        l1 = l1->next;
      }
      if (l2) {
        carry += l2->val;
        l2 = l2->next;
      }

      itr->next = new ListNode(carry % 10);
      carry /= 10;
      itr = itr->next;
    }
    l1 = reverseLL(preHead.next);
    return l1;
  }
};
// @lc code=end
