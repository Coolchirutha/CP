#include <bits/stdc++.h>

using namespace std;

int main()
{
  int y, k, n, count = 0;
  cin >> y >> k >> n;
  for (int x = ((y - (y % k)) + k); (x <= n) && x != 0; x += k)
  {
    count++;
    // cout << x << " " << y << " " << n << " ";
    cout << x-y << " ";
  }

  if (count == 0)
  {
    cout << -1;
  }
}
