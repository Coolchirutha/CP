#include <iostream>
using namespace std;
main()
{
  int count, max, current, x;
  cin >> count;
  cin >> current;
  cin >> current;
  max = current;
  while (count--)
  {
    cin >> x;
    current -= x;
    cin >> x;
    current += x;
    if (current > max)
      max = current;
  }
  cout << max;
}
