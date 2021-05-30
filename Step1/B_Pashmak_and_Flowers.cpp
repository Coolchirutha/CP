#include <bits/stdc++.h>

using namespace std;

int main()
{
  long long x, n, max, maxCount, min, minCount;
  cin >> n >> x;
  max = x;
  min = x;
  maxCount = 1;
  minCount = 1;
  while (cin >> x)
  {
    if (x > max)
    {
      max = x;
      maxCount = 1;
    }
    else if (x == max)
    {
      maxCount++;
    }
    if (x < min)
    {
      min = x;
      minCount = 1;
    }
    else if (x == min)
    {
      minCount++;
    }
  }

  cout << max - min << " ";

  if (max - min)
  {
    cout << maxCount * minCount;
  }
  else
  {
    cout << (maxCount * (maxCount - 1)) / 2;
  }

  return 0;
}
