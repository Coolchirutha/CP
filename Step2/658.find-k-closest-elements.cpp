/*
 * @lc app=leetcode id=658 lang=cpp
 *
 * [658] Find K Closest Elements
 */
#include <bits/stdc++.h>
using namespace std;
// @lc code=start
class Solution {
public:
  vector<int> findClosestElements(vector<int> &A, int k, int x) {
    int left = 0, right = A.size() - k;
    while (left < right) {
      int mid = (left + right) / 2;
      if (x - A[mid] > A[mid + k] - x) {
        left = mid + 1;
      } else {
        right = mid;
      }
    }
    return vector<int>(A.begin() + left, A.begin() + left + k);
  }
};
// class Solution {
// public:
//   vector<int> findClosestElements(vector<int> &arr, int k, int x) {
//     int left = 0, right = arr.size() - 1;

//     while (right - left + 1 > k) {

//       if (arr[right] - x < x - arr[left])
//         left++;
//       else
//         right--;
//     }

//     return vector<int>(arr.begin() + left, arr.begin() + right + 1);
//   }
// };
// @lc code=end
