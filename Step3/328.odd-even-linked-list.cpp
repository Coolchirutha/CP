/*
 * @lc app=leetcode id=328 lang=cpp
 *
 * [328] Odd Even Linked List
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
  ListNode *oddEvenList(ListNode *head) {
    if (!head || !head->next)
      return head;

    ListNode *evenHead = head->next, *itrOdd = head, *itrEven = head->next;
    while (itrEven && itrEven->next) {
      itrOdd->next = itrOdd->next->next;
      itrEven->next = itrEven->next->next;
      itrOdd = itrOdd->next;
      itrEven = itrEven->next;
    }
    itrOdd->next = evenHead;
    return head;
  }
};
// @lc code=end
