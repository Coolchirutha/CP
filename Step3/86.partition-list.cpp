/*
 * @lc app=leetcode id=86 lang=cpp
 *
 * [86] Partition List
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
  ListNode *partition(ListNode *head, int x) {
    ListNode less(0), greater(0);
    ListNode *lessItr = &less, *greaterItr = &greater;
    while (head) {
      if (head->val < x)
        lessItr = lessItr->next = head;
      else
        greaterItr = greaterItr->next = head;
      head = head->next;
    }
    greaterItr->next = NULL;
    lessItr->next = greater.next;
    return less.next;
  }
};
// @lc code=end
