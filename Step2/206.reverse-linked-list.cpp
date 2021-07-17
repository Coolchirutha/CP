/*
 * @lc app=leetcode id=206 lang=cpp
 *
 * [206] Reverse Linked List
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
// Recursive solution is slower and takes more space since it calls many stacks
// of variables.
class Solution {
public:
  ListNode *reverseList(ListNode *head) {
    // Base case is at the end of the LL. Head == NULL is for an empty LL.
    if (head == NULL || head->next == NULL) {
      return head;
    }
    // We call the function itself and as to return head for rest of the list
    // but the current element. Then we go to the next's next and point it to
    // current head and current next to NULL and return reverse's head.
    ListNode *revList = reverseList(head->next);
    head->next->next = head;
    head->next = NULL;
    return revList;
  }
};
// @lc code=end

// Iterative solution which is faster and runs at O(1) space.
class Solution {
public:
  ListNode *reverseList(ListNode *head) {
    // We are tracking 3 pointers, previousNode, currentNode and nextNode.
    ListNode *prev = NULL, *cur = head, *next = NULL;
    while (cur) {
      // We invert the currentNode's next pointer to previousNode and move
      // previousNode pointer and currentNode pointer forward until currentNode
      // exists and not NULL.
      next = cur->next;
      cur->next = prev;
      prev = cur;
      cur = next;
    }
    return prev;
  }
};
