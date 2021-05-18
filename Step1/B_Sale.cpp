#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
  int i, count, maxCount, result = 0;
  cin >> count >> maxCount;
  vector<int> arr(count);
  for (i = 0; i < count; i++)
  {
    cin >> arr[i];
  }
  sort(arr.begin(), arr.end());
  for (i = 0; i < maxCount; i++)
  {
    if (arr[i] < 0)
    {
      result -= arr[i];
    }
  }

  cout << result;
}
