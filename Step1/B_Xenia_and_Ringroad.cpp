#include <iostream>
using namespace std;
main()
{
  long long n, m, x, result = 0, curpos = 1;
  cin >> n >> m;
  while (m--)
  {
    cin >> x;
    if (x == curpos)
    {
      continue;
    }
    else if (x > curpos)
    {
      result += (x - curpos);
      curpos = x;
      continue;
    }
    else if (x < curpos)
    {
      result += (n + x - curpos);
      curpos = x;
      continue;
    }
  }
  cout << result;
}
