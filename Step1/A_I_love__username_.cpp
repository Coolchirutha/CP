#include <iostream>
using namespace std;
main()
{
  int count, max, min, result = 0, x;
  cin >> count >> x;
  min = x;
  max = x;
  while (count--)
  {
    cin >> x;
    if (x < min || x > max)
    {
      if (x < min)
        min = x;
      if (x > max)
        max = x;
      result++;
    }
  }
  cout << result;
}
