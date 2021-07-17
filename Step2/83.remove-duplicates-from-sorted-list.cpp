/*
 * @lc app=leetcode id=83 lang=cpp
 *
 * [83] Remove Duplicates from Sorted List
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
  ListNode *deleteDuplicates(ListNode *head) {
    // If the given linked list is empty we return the answer
    if (!head)
      return head;
    // Using two pointers to traverse the LL and also tracking the current value
    ListNode *left = head, *right = head->next;
    int curVal = left->val;
    while (right) {
      // If there is no duplicate found, replace the left pointer's next as the
      // right pointer and move both left and right forward. If duplicate is
      // found then we move the right pointer forward until we dont have any
      // duplicates left.
      if (curVal != right->val) {
        left->next = right;
        curVal = right->val;
        left = left->next;
      }
      right = right->next;
    }
    // Finally we come to the end and declare the left's next as null. This will
    // ensure that even though the complete LL is same, we replace the last
    // unique's next as NULL to terminate the LL.
    left->next = NULL;
    return head;
  }
};
// @lc code=end
