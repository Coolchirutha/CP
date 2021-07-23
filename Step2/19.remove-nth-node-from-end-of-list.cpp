/*
 * @lc app=leetcode id=19 lang=cpp
 *
 * [19] Remove Nth Node From End of List
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
  ListNode *removeNthFromEnd(ListNode *head, int n) {
    int size = 0;
    ListNode *itr = head;
    while (itr) {
      size++;
      itr = itr->next;
    }
    itr = head;
    int curNode = 1, toDel = (size - n) + 1;
    if (toDel == 1) {
      head = head->next;
      return head;
    }

    while (curNode != (toDel - 1)) {
      curNode++;
      itr = itr->next;
    }
    itr->next = itr->next->next;
    return head;
  }
};
// @lc code=end
