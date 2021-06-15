#include <bits/stdc++.h>
using namespace std;
int main()
{
  int n, k, a[100000];
  cin >> n >> k;
  for (int i = 0; i < n; i++)
  {
    cin >> a[i];
  }
  while (n-- && n > 0)
  {
    if (a[n] != a[n - 1])
    {
      break;
    }
  }
  (n >= k) ? cout << -1 : cout << n;
}
