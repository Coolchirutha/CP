/*
 * @lc app=leetcode id=838 lang=cpp
 *
 * [838] Push Dominoes
 */
#include <bits/stdc++.h>
using namespace std;
// @lc code=start
class Solution {
public:
  Solution() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
  }
  string pushDominoes(string s) {
    int n = s.size(), curCount = 1;
    vector<int> left(n, 0), right(n, 0);
    string result = "";
    char prev = '.';

    for (int i = 0; i < n; i++) {
      if (s[i] == 'R') {
        prev = 'R';
        curCount = 1;
        continue;
      } else if (s[i] == 'L') {
        prev = 'L';
      }

      if (prev == 'R' && s[i] == '.') {
        right[i] = curCount++;
      }
    }

    prev = '.';
    curCount = 1;

    for (int i = n - 1; i >= 0; i--) {
      if (s[i] == 'L') {
        prev = 'L';
        curCount = 1;
        continue;
      } else if (s[i] == 'R') {
        prev = 'R';
      }

      if (prev == 'L' && s[i] == '.') {
        left[i] = curCount++;
      }
    }

    for (int i = 0; i < n; i++) {
      if (!left[i] && !right[i]) {
        result += s[i];
      } else if (!left[i]) {
        result += 'R';
      } else if (!right[i]) {
        result += 'L';
      } else if (left[i] == right[i]) {
        result += '.';
      } else if (left[i] > right[i]) {
        result += 'R';
      } else if (left[i] < right[i]) {
        result += 'L';
      }
    }

    return result;
  }
};
// @lc code=end
