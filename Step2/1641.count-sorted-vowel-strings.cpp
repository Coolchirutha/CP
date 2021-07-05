/*
 * @lc app=leetcode id=1641 lang=cpp
 *
 * [1641] Count Sorted Vowel Strings
 */

#include <bits/stdc++.h>
using namespace std;
// @lc code=start
class Solution {
public:
  /*
    The number of strings that can be formed with starting letter at
    For n = 1,    a = 01, e = 01, i = 01, o = 01, u = 1
    For n = 2,    a = 05, e = 04, i = 03, o = 02, u = 1
    For n = 3,    a = 15, e = 10, i = 06, o = 03, u = 1
    For n = 4,    a = 35, e = 20, i = 10, o = 04, u = 1

    Here, you can clearly see the pattern as
    number of words starting with o (with n = i) = number of words starting with o (with n = (i + 1))
    number of words starting with i (with n = i) = number of words starting with i (with n = (i + 1))
    number of words starting with e (with n = i) = number of words starting with e (with n = (i + 1))
    number of words starting with a (with n = i) = number of words starting with a (with n = (i + 1))

    Writing that into code
  */

  int countVowelStrings(int n) {
    vector<int> vec(5, 1);
    for (int i = 2; i <= n; i++) {
      for (int i = 3; i >= 0; i--) {
        vec[i] += vec[i + 1];
      }
    }
    return accumulate(vec.begin(), vec.end(), 0);
  }
};
// @lc code=end
