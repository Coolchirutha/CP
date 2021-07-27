/*
 * @lc app=leetcode id=725 lang=cpp
 *
 * [725] Split Linked List in Parts
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
  vector<ListNode *> splitListToParts(ListNode *head, int k) {
    vector<ListNode *> result(k, NULL);
    int size = 0;
    ListNode *itr = head;
    while (itr) {
      size++;
      itr = itr->next;
    }

    int divisor = size / k, remainder = size % k;
    ListNode *cur = head, *prev = NULL;
    for (int i = 0; cur && i < k; i++, remainder--) {
      result[i] = cur;
      for (int j = 0; j < divisor + (remainder > 0); j++) {
        prev = cur;
        cur = cur->next;
      }
      prev->next = NULL;
    }
    return result;
  }
};
// @lc code=end
