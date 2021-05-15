#include <iostream>
#include <cmath>
using namespace std;
main()
{
  int i, result, count, each, max = 0;
  cin >> count >> each;
  for (i = 0; i < count; i++)
  {
    double x;
    cin >> x;
    if (ceil(x / each) >= max)
    {
      result = i + 1;
      max = ceil(x/each);
    }
  }
  cout << result;
}
