#include <bits/stdc++.h>
using namespace std;

int main()
{
  int k;
  string s, baseString, ans;
  vector<int> hashmap(26);
  cin >> k >> s;
  // Creating a hashmap and counting the occurrences of every alphabet
  for (int i : s)
  {
    hashmap[i - 'a']++;
  }
  for (int i = 0; i < 26; i++)
  {
    // If the count of any alphabet is not a multiple of k then print -1 and return since it cannot form a k-string
    if (hashmap[i] % k != 0)
    {
      cout << -1 << endl;
      return 0;
    }
    // Else we can just append the number of times the alphabet is repeating in the base string.
    baseString += string(hashmap[i] / k, i + 'a');
  }
  for (int i = 1; i <= k; i++)
  {
    // Repeating the basestring as many times as possible
    ans += baseString;
  }
  cout << ans << endl;
}
