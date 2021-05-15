#include <iostream>
#include <vector>
using namespace std;
main()
{
  int i, j, count, left, right, top, bottom, result = 0;
  cin >> count;
  vector<int> x(count), y(count);
  for (i = 0; i < count; i++)
  {
    cin >> x[i] >> y[i];
  }
  for (i = 0; i < count; i++)
  {
    top = bottom = right = left = 0;
    for (j = 0; j < count; j++)
    {
      if (x[i] == x[j] && y[i] < y[j])
      {
        top = 1;
      }
      if (x[i] == x[j] && y[i] > y[j])
      {
        bottom = 1;
      }
      if (x[i] > x[j] && y[i] == y[j])
      {
        left = 1;
      }
      if (x[i] < x[j] && y[i] == y[j])
      {
        right = 1;
      }
    }
    if (top + bottom + right + left == 4)
    {
      result++;
    }
  }
  cout << result;
}
