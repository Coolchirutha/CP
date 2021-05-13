#include <iostream>
using namespace std;
int count, i, x, y;
main()
{
  cin >> count;
  for (i = 0; i < count; i++)
  {
    cin >> x;
    y = y + x;
  }
  cout << (double)y / count;
}
