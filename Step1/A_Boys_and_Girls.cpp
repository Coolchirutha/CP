#include <bits/stdc++.h>

using namespace std;

int main()
{
  int n, m;

  cin >> n >> m;

  if (n > m)
  {
    for (int i = 0; i < m; i++)
    {
      cout << "BG";
    }
    for (int i = 0; i < n - m; i++)
    {
      cout << 'B';
    }
    return 0;
  }
  else
  {
    for (int i = 0; i < n; i++)
    {
      cout << "GB";
    }
    for (int i = 0; i < m - n; i++)
    {
      cout << 'G';
    }
    return 0;
  }

  return 0;
}
