#include <bits/stdc++.h>

using namespace std;

int main()
{
  int t, sx, sy, ex, ey, xTarget, yTarget, count = 0;
  cin >> t >> sx >> sy >> ex >> ey;

  xTarget = ex - sx;
  yTarget = ey - sy;

  char x;
  while (cin >> x)
  {

    if (xTarget || yTarget)
    {
      count++;
    }

    switch (x)
    {
    case 'N':
      if (yTarget > 0)
      {
        yTarget--;
      }
      break;
    case 'S':
      if (yTarget < 0)
      {
        yTarget++;
      }
      break;
    case 'E':
      if (xTarget > 0)
      {
        xTarget--;
      }
      break;
    case 'W':
      if (xTarget < 0)
      {
        xTarget++;
      }
      break;
    }
  }
  if (!xTarget && !yTarget)
  {
    cout << count;
  }
  else
  {
    cout << -1;
  }
}
