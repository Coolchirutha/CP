#include <bits/stdc++.h>

using namespace std;

int main()
{
  string s;
  int oddCount = 0;
  cin >> s;
  vector<int> hashtable(26);
  for (auto &i : s)
    hashtable[i - 'a']++;
  for (auto &i : hashtable)
    oddCount += i % 2;
  if (!oddCount)
  {
    cout << "First";
    return 0;
  }
  (oddCount % 2) ? cout << "First" : cout << "Second";
  return 0;
}
