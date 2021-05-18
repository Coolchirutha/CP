#include <iostream>
using namespace std;
int main()
{
  int i, x, count, nfives = 0, nzeroes = 0;
  cin >> count;
  for (i = 0; i < count; i++)
  {
    cin >> x;
    (x == 5) ? nfives++ : nzeroes++;
  }
  if (nzeroes == 0)
  {
    cout << -1;
    return 0;
  }
  if (nfives / 9 >= 1)
  {
    nfives -= (nfives % 9);
    while (nfives--)
    {
      cout << 5;
    }
  }
  else
  {
    cout << 0;
    return 0;
  }
  while (nzeroes--)
  {
    cout << 0;
  }
}
