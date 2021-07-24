/*
 * @lc app=leetcode id=705 lang=cpp
 *
 * [705] Design HashSet
 */
#include <bits/stdc++.h>
using namespace std;
// @lc code=start
class MyHashSet {
public:
  /** Initialize your data structure here. */
  set<int> s;
  MyHashSet() {}

  void add(int key) { s.insert(key); }

  void remove(int key) { s.erase(key); }

  /** Returns true if this set contains the specified element */
  bool contains(int key) {
    auto i = s.find(key);
    return (i != s.end());
  }
};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */
// @lc code=end
