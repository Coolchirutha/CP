/*
 * @lc app=leetcode id=25 lang=cpp
 *
 * [25] Reverse Nodes in k-Group
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

  ListNode *reverseKGroup(ListNode *head, int k) {
    if (head == NULL || k == 1)
      return head;

    // Creating a dummy element to point to head.
    ListNode *prehead = new ListNode(-1);
    prehead->next = head;

    ListNode *cur = prehead, *next, *prev = prehead;
    int count = 0;

    // Finding size of LL.
    while (cur->next) {
      cur = cur->next;
      count++;
    }

    while (count >= k) {
      cur = prev->next;
      next = cur->next;
      // Inverting the k sized block.
      for (int i = 1; i < k; ++i) {
        cur->next = next->next;
        next->next = prev->next;
        prev->next = next;
        next = cur->next;
      }
      prev = cur;
      count -= k;
    }
    return prehead->next;
  }
};
// @lc code=end
