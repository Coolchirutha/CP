/*
 * @lc app=leetcode id=2 lang=cpp
 *
 * [2] Add Two Numbers
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
  ListNode *addTwoNumbers(ListNode *l1, ListNode *l2) {
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
    return preHead.next;
  }
};
// @lc code=end
