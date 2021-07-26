/*
 * @lc app=leetcode id=147 lang=cpp
 *
 * [147] Insertion Sort List
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
  Solution() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
  }
  ListNode *insertionSortList(ListNode *head) {
    ListNode *itr = head;
    vector<int> arr;
    while(itr){
      arr.push_back(itr->val);
      itr = itr->next;
    }
    sort(arr.begin(), arr.end());
    itr = head;
    for (int i = 0; i < arr.size(); i++)
    {
      itr->val = arr[i];
      itr = itr->next;
    }
    return head;
  }
};
// @lc code=end
