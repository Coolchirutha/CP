/*
 * @lc app=leetcode id=1171 lang=cpp
 *
 * [1171] Remove Zero Sum Consecutive Nodes from Linked List
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
  ListNode *removeZeroSumSublists(ListNode *head) {
    map<int, ListNode *> m;
    ListNode *itr = head;
    long long curSum = 0;
    // Now, if we want to delete from the head node, we will need a dummy node
    // pointing to the head so as to not get reference error.
    ListNode *dummy = new ListNode(0);
    dummy->next = head;
    m[0] = dummy;
    while (itr) {
      curSum += itr->val;
      if (m.count(curSum)) {
        // Need to erase the hashmap.
        itr = m[curSum]->next;
        int tempSum = curSum + itr->val;
        while (tempSum != curSum) {
          m.erase(tempSum);
          itr = itr->next;
          tempSum += itr->val;
        }
        m[curSum]->next = itr->next;
      } else {
        m[curSum] = itr;
      }
      itr = itr->next;
    }
    // Here we return dummy's next since head may have changed.
    return dummy->next;
  }
};
// @lc code=end
