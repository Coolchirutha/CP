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
    map<Node *, Node *> m;
    Node *itr = head;
    while(itr){
      m[itr] = new Node(itr->val);
      itr = itr->next;
    }
    itr = head;
    while(itr){
      m[itr]->next = m[itr->next];
      m[itr]->random = m[itr->random];
      itr = itr->next;
    }
    return m[head];
  }
};
// @lc code=end
