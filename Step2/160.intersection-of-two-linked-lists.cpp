/*
 * @lc app=leetcode id=160 lang=cpp
 *
 * [160] Intersection of Two Linked Lists
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
  ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
    ListNode *p1 = headA;
    ListNode *p2 = headB;

    if (p1 == NULL || p2 == NULL) return NULL;

    while (p1 != NULL && p2 != NULL && p1 != p2) {
        p1 = p1->next;
        p2 = p2->next;

        //
        // Any time they collide or reach end together without colliding
        // then return any one of the pointers.
        //
        if (p1 == p2) return p1;

        //
        // If one of them reaches the end earlier then reuse it
        // by moving it to the beginning of other list.
        // Once both of them go through reassigning,
        // they will be equidistant from the collision point.
        //
        if (p1 == NULL) p1 = headB;
        if (p2 == NULL) p2 = headA;
    }

    return p1;
  }
};
// @lc code=end

// My solution(slower and more space consuming).
class Solution {
public:
  ListNode *getIntersectionNode(ListNode *head1, ListNode *head2) {
    unordered_map<ListNode *, int> m;
    ListNode *itr = head1;
    while(itr){
      m.insert({itr, 1});
      itr = itr->next;
    }
    itr = head2;
    while(itr){
      if(m.count(itr)){
        return itr;
      }
      itr = itr->next;
    }
    return NULL;
  }
};
