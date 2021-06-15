#include <bits/stdc++.h>

using namespace std;

int main()
{

  int n, x, arr[2] = {0};
  cin >> n;

  for (int i = 0; i < n; i++)
  {
    cin >> x;
    (x == 100) ? arr[0]++ : arr[1]++;
  }

  if (arr[0] % 2)
  {
    cout << "NO";
    return 0;
  }

  if (arr[1] > 0 && arr[1] % 2)
  {
    if (arr[0] >= 2)
    {
      cout << "YES";
      return 0;
    }
    else
    {
      cout << "NO";
      return 0;
    }
  }
  cout << "YES";
  return 0;
}
