#include <bits/stdc++.h>

using namespace std;

int main()
{
  int n, equals = 0, greater = 0, lesser = 0;
  cin >> n;
  string s1, s2;
  cin >> s1;
  s2 = s1.substr(n);

  sort(s1.begin(),s1.begin()+n);
  sort(s2.begin(),s2.begin()+n);

  for (int i = 0; i < n; i++)
  {
    if (s1[i] > s2[i])
    {
      greater++;
    }
    else if (s1[i] < s2[i])
    {
      lesser++;
    }
    else
    {
      equals++;
    }
  }

  cout << ((equals || greater * lesser) ? "NO" : "YES");

  return 0;
}
