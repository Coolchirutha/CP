#include <bits/stdc++.h>

using namespace std;

int main()
{
  int n, arr[3], result = 0;
  cin >> n >> arr[0] >> arr[1] >> arr[2];
  sort(arr, arr + 3);

  for (int i = 0; i <= 4000; i++)
  {
    for (int j = 0; j <= 4000; j++)
    {
      int temp = n - (arr[2] * i) - (arr[1] * j);
      if (temp >= 0 && temp % arr[0] == 0)
      {
        result = max(result, i + j + (temp / arr[0]));
      }
    }
  }

  cout << result;
  return 0;
}
