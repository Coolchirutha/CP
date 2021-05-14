#include <bits/stdc++.h>
using namespace std;
main()
{
  int a[100], i = 0, j;
  while (cin >> a[i++])
  {
    cin.ignore(1);
  }
  sort(a, a + --i);
  for (j = 0; j < i; j++)
  {
    cout << a[j];
    if (j < i - 1)
    {
      cout << '+';
    }
  }
}
