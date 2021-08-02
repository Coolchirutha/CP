/*
 * @lc app=leetcode id=138 lang=cpp
 *
 * [138] Copy List with Random Pointer
 */
#include <bits/stdc++.h>
using namespace std;
class Node {
public:
  int val;
  Node *next;
  Node *random;

  Node(int _val) {
    val = _val;
    next = NULL;
    random = NULL;
  }
};

// @lc code=start
class Solution {
public:

  Node *copyRandomList(Node *head) {
    if (head == NULL)
      return NULL;

    Node *newHead, *l1, *l2;
    for (l1 = head; l1 != NULL; l1 = l1->next->next) {
      // Creating a duplicate node at every point and inserting after curNode.
      l2 = new Node(l1->val);
      l2->next = l1->next;
      l1->next = l2;
    }

    newHead = head->next;
    for (l1 = head; l1 != NULL; l1 = l1->next->next) {
      // Here we are replacing the random of the new list with the address of
      // newly created random i.e. cur->random->next.
      if (l1->random != NULL)
        l1->next->random = l1->random->next;
    }

    for (l1 = head; l1 != NULL; l1 = l1->next) {
      // Breaking up the list and returning new List.
      l2 = l1->next;
      l1->next = l2->next;
      if (l2->next != NULL)
        l2->next = l2->next->next;
    }

    return newHead;
  }
};
// @lc code=end
