/*
 * @lc app=leetcode id=142 lang=cpp
 *
 * [142] Linked List Cycle II
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
  ListNode *detectCycle(ListNode *head) {
    unordered_map<ListNode *, int> hashmap;
    ListNode *itr = head;
    while (itr) {
      if (!hashmap.count(itr)) {
        hashmap.insert({itr, 1});
        itr = itr->next;
      } else {
        return itr;
      }
    }
    return NULL;
  }
};
// @lc code=end
