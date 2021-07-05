/*
 * @lc app=leetcode id=1220 lang=cpp
 *
 * [1220] Count Vowels Permutation
 */
#include <bits/stdc++.h>
using namespace std;
// @lc code=start
class Solution {
public:
  /*
  Preferably work on https://leetcode.com/problems/count-sorted-vowel-strings/
  problem before solving this one. My solution to the above problem is
  https://github.com/Coolchirutha/CP/blob/master/Step2/1641.count-sorted-vowel-strings.cpp


  Given constraints:
  Each character is a lower case vowel ('a', 'e', 'i', 'o', 'u')
  Each vowel 'a' may only be followed by an 'e'.
  Each vowel 'e' may only be followed by an 'a' or an 'i'.
  Each vowel 'i' may not be followed by another 'i'.
  Each vowel 'o' may only be followed by an 'i' or a 'u'.
  Each vowel 'u' may only be followed by an 'a'.

  Taking these into consideration,
  the number of strings of length 'n' that can be formed with ending letter as
  'a' is equal to the number of strings of length 'n - 1' that can be formed
  with ending letter as 'e' or 'i' or 'u'. Similarly for 'e', previous letter
  can be 'a' or 'i', For 'i', previous letter can be 'e' or 'o'. For 'o',
  previous letter can be 'i'. For 'u', previous letter can be 'o' or 'i'.

  So we keep updating our values and sum up the individual counts to get result.

  Writing that into code
  */
  int countVowelPermutation(int n) {
    long a = 1, e = 1, i = 1, o = 1, u = 1;
    int limit = 1e9 + 7;
    for (int j = 2; j <= n; j++) {
      long A = (e + u + i) % limit;
      long E = (a + i) % limit;
      long I = (e + o) % limit;
      long O = i % limit;
      long U = (o + i) % limit;
      a = A;
      e = E;
      i = I;
      o = O;
      u = U;
    }
    return (a + e + i + o + u) % limit;
  }
};
// @lc code=end
