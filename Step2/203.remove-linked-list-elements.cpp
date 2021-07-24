/*
 * @lc app=leetcode id=203 lang=cpp
 *
 * [203] Remove Linked List Elements
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
  ListNode *removeElements(ListNode *head, int val) {
    if(!head) return head;

    while(head != nullptr && head->val == val){
      head = head->next;
    }

    if(!head) return head;
    ListNode *itr = head;
    while(itr && itr->next){
      // Removing all the next elements that have val. Traversing only when next's val isn't to be removed.
      if(itr->next->val == val){
        itr->next = itr->next->next;
      } else {
        itr = itr->next;
      }
    }
    return head;
  }
};
// @lc code=end
