/*
 * @lc app=leetcode id=1306 lang=cpp
 *
 * [1306] Jump Game III
 */
#include <bits/stdc++.h>
using namespace std;
// @lc code=start
class Solution {
public:
  bool dfs(vector<int> &arr, int i, vector<bool> &visited) {
    if (i < 0 or i >= arr.size() or visited[i]) {
      return false;
    }
    if (arr[i] == 0) {
      return true;
    }
    visited[i] = true;
    bool b = false;
    b |= dfs(arr, i + arr[i], visited);
    if (b) {
      return true;
    }
    b |= dfs(arr, i - arr[i], visited);
    return b;
  }
  bool canReach(vector<int> &arr, int i) {
    vector<bool> visited(arr.size(), false);
    return dfs(arr, i, visited);
  }
};
/*
class Solution {
public:
  bool dfs(vector<int> &arr, vector<bool> visited, int curIndex) {
    // If currentIndex is out of bounds we return false.
    // Also when we have previously visited the element,
    // we return false else it will go into a loop.
    if (curIndex < 0 || curIndex >= arr.size() || visited[curIndex])
      return false;

    // If we land at 0 we solved the problem
    if (arr[curIndex] == 0)
      return true;

    // Now we set the currentIndex as visited and check if its jump will return
    // true
    visited[curIndex] = true;
    bool flag = false;
    flag |= dfs(arr, visited, curIndex + arr[curIndex]);
    if (flag)
      return true;
    flag |= dfs(arr, visited, curIndex - arr[curIndex]);
    return flag;
  }
  bool canReach(vector<int> &arr, int start) {
    vector<bool> visited(arr.size(), false);
    return dfs(arr, visited, start);
  }
};
*/
// @lc code=end
