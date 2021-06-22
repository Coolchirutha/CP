#include <bits/stdc++.h>

using namespace std;

int main()
{
  int n, k;
  long long result = 0;
  cin >> n >> k;
  char x;
  int hashtable[26] = {0};
  while (n--)
  {
    cin >> x;
    hashtable[x - 'A']++;
  }
  sort(hashtable, hashtable + 26);
  for (int i = 25; i >= 0; i--)
  {
    long long cur = min(hashtable[i], k);
    k -= cur;
    result += (cur) * ((k) ? hashtable[i] : cur);
    if (hashtable[i] == 0)
      break;
  }
  cout << result << endl;
}
