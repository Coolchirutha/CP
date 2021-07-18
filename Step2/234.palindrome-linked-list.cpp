/*
 * @lc app=leetcode id=234 lang=cpp
 *
 * [234] Palindrome Linked List
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
  bool isPalindrome(ListNode *head) {
    // If size of LL is 0 or 1 we return head.
    if (!head || !head->next)
      return true;

    // Using 2 pointers, one slow and another fast until fast reaches end of
    // list. By this time, slow pointer reaches mid of LL.
    ListNode *slow = head, *fast = head->next;
    while (fast && fast->next) {
      slow = slow->next;
      fast = fast->next->next;
    }

    // Now we break the LL and invert the second half of the LL.
    ListNode *head2;
    head2 = slow->next;
    slow->next = NULL;
    ListNode newHead(0);
    ListNode *next = NULL, *itr = head2;
    while (itr) {
      next = itr->next;
      itr->next = newHead.next;
      newHead.next = itr;
      itr = next;
    }

    // Now we check for palindrome by comparing the two halves.
    head2 = newHead.next;
    while (head2) {
      if (head2->val != head->val)
        return false;
      head2 = head2->next;
      head = head->next;
    }
    return head2 == NULL;
  }
};
// @lc code=end

// Approach 1: Use a vector and check

class Solution {
public:
  bool isPalindrome(ListNode *head) {
    vector<int> arr;
    while (head) {
      arr.push_back(head->val);
      head = head->next;
    }
    for (int i = 0; i < arr.size() / 2; i++) {
      if (arr[i] != arr[arr.size() - i - 1]) {
        return false;
      }
    }
    return true;
  }
};
