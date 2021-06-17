#include <iostream>

using namespace std;

int main()
{
  int count, x, maxCount = -1;
  cin >> count;
  int arr[1001] = {0};
  for (int i = 0; i < count; i++)
  {
    cin >> x;
    arr[x]++;
  }

  for (auto &i : arr)
  {
    if (i > maxCount)
    {
      maxCount = i;
    }
  }

  if (count == 1)
  {
    cout << "YES";
    return 0;
  }

  (maxCount > ((count+1) / 2)) ? cout << "NO" : cout << "YES";
  return 0;
}
