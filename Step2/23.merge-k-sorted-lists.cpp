/*
 * @lc app=leetcode id=23 lang=cpp
 *
 * [23] Merge k Sorted Lists
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
  ListNode *mergeTwoLists(ListNode *l1, ListNode *l2) {
    if (!l1 && !l2)
      return NULL;
    else if (!l1)
      return l2;
    else if (!l2)
      return l1;

    ListNode *result, *itr;
    if (l1->val < l2->val) {
      result = l1;
      itr = result;
      l1 = l1->next;
      itr->next = NULL;
    } else {
      result = l2;
      itr = result;
      l2 = l2->next;
      itr->next = NULL;
    }
    while (l1 && l2) {
      if (l1->val < l2->val) {
        itr->next = l1;
        l1 = l1->next;
        itr = itr->next;
        itr->next = NULL;
      } else {
        itr->next = l2;
        l2 = l2->next;
        itr = itr->next;
        itr->next = NULL;
      }
    }
    if (l1)
      itr->next = l1;
    if (l2)
      itr->next = l2;
    return result;
  }
  ListNode *mergeKLists(vector<ListNode *> &lists) {
    if (!lists.size()) {
      return NULL;
    }
    while (lists.size() > 1) {
      lists.push_back(mergeTwoLists(lists[0], lists[1]));
      lists.erase(lists.begin());
      lists.erase(lists.begin());
    }
    return lists.front();
  }
};
// @lc code=end
