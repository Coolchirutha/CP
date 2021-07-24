/*
 * @lc app=leetcode id=61 lang=cpp
 *
 * [61] Rotate List
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
  ListNode *rotateRight(ListNode *head, int k) {
    if (!head || !head->next || k == 0) {
      return head;
    }
    int size = 1;
    ListNode *itr = head;
    while (itr->next) {
      size++;
      itr = itr->next;
    }
    // Making LL circular
    itr->next = head;
    k %= size;
    size -= k;
    while (size--) {
      itr = itr->next;
    }
    ListNode *result = itr->next;
    itr->next = NULL;
    return result;
  }
};
// @lc code=end
