#include <iostream>
using namespace std;
main()
{
  int count, temp, i, sum = 0, result = 0;
  cin >> count;
  for (int i = 0; i < count; i++)
  {
    cin >> temp;
    sum += temp;
  }
  for (int i = 1; i <= 5; i++)
  {
    if ((sum + i - 1) % (count + 1))
    {
      result++;
    }
    else
    {
      continue;
    }
  }
  cout << result;
}
