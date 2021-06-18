#include <bits/stdc++.h>

using namespace std;

int main()
{
  int n, x, sx = 0, sy = 0, sz = 0;
  cin >> n;
  for (int i = 0; i < n; i++)
  {
    cin >> x;
    sx += x;
    cin >> x;
    sy += x;
    cin >> x;
    sz += x;
  }

  cout << ((!sx && !sy && !sz) ? "YES" : "NO");

  return 0;
}
