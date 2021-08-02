/*
 * @lc app=leetcode id=394 lang=cpp
 *
 * [394] Decode String
 */
#include <bits/stdc++.h>
using namespace std;
// @lc code=start
class Solution {
public:
  string decodeString(string s) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // Now I am keeping 2 stacks. strings will keep track of what string we left
    // behind when we open a brace and counts will keep count of how many times
    // to repeat the current string inside brace.
    stack<string> strings;
    stack<int> counts;
    string result = "";
    int curIndex = 0;
    // We start with first element and iterate over original string.
    while (curIndex < s.size()) {
      if (isdigit(s[curIndex])) {
        // If we find that the element is a digit we take into account all the
        // digits (30 or 140 etc) and then push to the counts stack.
        int count = 0;
        while (isdigit(s[curIndex])) {
          count = (10 * count) + (s[curIndex] - '0');
          curIndex++;
        }
        counts.push(count);
      } else if (s[curIndex] == '[') {
        // If the character is a opening brace, we keep the current string
        // inside the stack to be added later while resetting the curString and
        // moving on.
        strings.push(result);
        result = "";
        curIndex++;
      } else if (s[curIndex] == ']') {
        // If the character is a closing brace then we take the string just
        // before the opening brace and add the current string count.top()
        // number of times.
        string temp = strings.top();
        strings.pop();
        int count = counts.top();
        counts.pop();
        for (int i = 0; i < count; i++) {
          temp += result;
        }
        result = temp;
        curIndex++;
      } else {
        // Here we arrive when the character is a letter which is appended to
        // curString.
        result += s[curIndex];
        curIndex++;
      }
    }
    return result;
  }
};
// @lc code=end
