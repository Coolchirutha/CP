/*
 * @lc app=leetcode id=141 lang=cpp
 *
 * [141] Linked List Cycle
 */
#include <bits/stdc++.h>
using namespace std;

struct ListNode {
  int val;
  ListNode *next;
  ListNode(int x) : val(x), next(NULL) {}
};

// @lc code=start
class Solution {
public:
  bool hasCycle(ListNode *head) {
    if(!head) return false;
    ListNode *fast = head, *slow = head;
    while(fast->next && fast->next->next ){
      slow = slow->next;
      fast = fast->next->next;
      if(fast == slow) return true;
    }
    return false;
  }
};
// @lc code=end
