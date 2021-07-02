/*
 * @lc app=leetcode id=239 lang=cpp
 *
 * [239] Sliding Window Maximum
 */
#include <bits/stdc++.h>
using namespace std;
// @lc code=start
class Solution {
public:
  // Approach using Doubly linked List
  vector<int> maxSlidingWindow(vector<int> &nums, int k) {
    vector<int> result;
    // Here pair<int, int> will contain nums[i] and i respectively
    deque<pair<int, int>> queue;

    for (int i = 0; i < nums.size(); i++) {
      // Removing the top first element if it is out of current window
      if (!queue.empty() and queue.front().second <= (i - k)) {
        queue.pop_front();
      }

      // Removing elements that are smaller than the current element to maintain the descending order
      while (!queue.empty() and queue.back().first < nums[i]) {
        queue.pop_back();
      }

      // Add current node to queue
      queue.push_back(make_pair(nums[i], i));

      // While iterating, we add the max of the window to the result vector from (k - 1)th element
      if (i >= (k - 1)) {
        result.push_back(queue.front().first);
      }
    }

    return result;
  }
};
// Approach using max heap
// class Solution {
// public:
//   vector<int> maxSlidingWindow(vector<int> &nums, int k) {
//     vector<int> result;
//     priority_queue<pair<int, int>> heap;

//     for (int i = 0; i < nums.size(); i++) {
//       // Popping the max element if it is outside the sliding window
//       while (!heap.empty() and heap.top().second <= (i - k)) {
//         heap.pop();
//       }
//       // Pushing the current element into the array
//       heap.push(make_pair(nums[i], i));
//       // In the valid window we pushback the max value to result
//       if (i >= (k - 1)) {
//         result.push_back(heap.top().first);
//       }
//     }
//     return result;
//   }
// };
// @lc code=end
