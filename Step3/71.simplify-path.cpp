/*
 * @lc app=leetcode id=71 lang=cpp
 *
 * [71] Simplify Path
 */
#include <bits/stdc++.h>
using namespace std;
// @lc code=start
class Solution {
public:
  string simplifyPath(string path) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    vector<string> dir;
    for (int i = 0; i < path.size(); i++) {
      string curdir;
      while (i < path.size() && path[i] != '/') {
        curdir += path[i];
        i += 1;
      }
      if (curdir == "" || curdir == ".") {
        continue;
      }
      if (curdir == "..") {
        if (dir.size() > 0) {
          dir.pop_back();
        }
      } else {
        dir.push_back(curdir);
      }
    }
    string result;
    if (dir.size() == 0) {
      return "/";
    }
    for (int i = 0; i < dir.size(); i++) {
      result += "/" + dir[i];
    }
    return result;
  }
};
// @lc code=end
