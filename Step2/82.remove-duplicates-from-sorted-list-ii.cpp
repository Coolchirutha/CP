/*
 * @lc app=leetcode id=82 lang=cpp
 *
 * [82] Remove Duplicates from Sorted List II
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
    ListNode *result = new ListNode(0);
    ListNode *curNode = result;
    result->next = head;
    while(curNode->next && curNode->next->next){
      if(curNode->next->val == curNode->next->next->val){
        int curDuplicate = curNode->next->val;
        while(curNode->next && curNode->next->val == curDuplicate){
          curNode->next = curNode->next->next;
        }
      } else curNode = curNode->next;
    }
    return result->next;
  }
};
// @lc code=end
