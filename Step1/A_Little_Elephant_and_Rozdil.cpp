#include <iostream>
using namespace std;
main()
{
  long long count, i, x, minDist, minPos, duplicate = false;
  cin >> count >> i;
  minDist = i;
  minPos = 1;
  count--;
  for (x = 1; x <= count; x++)
  {
    cin >> i;
    if (i <= minDist)
    {
      if (i == minDist)
      {
        duplicate = true;
      }
      else
      {
        duplicate = false;
        minDist = i;
        minPos = x+1;
      }
    }
  }

  (!duplicate) ? cout << minPos : cout << "Still Rozdil";
}
