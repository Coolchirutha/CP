#include <bits/stdc++.h>

using namespace std;

int main()
{
  int n, m, d, result = 0;
  cin >> n >> m >> d;
  int size = n * m;
  int arr[size];
  for (int i = 0; i < size; i++)
  {
    cin >> arr[i];
  }

  sort(arr, arr + size);

  for (int i = 0; i < size; i++)
  {
    result += abs(arr[i] - arr[size / 2]);
  }

  cout << ((result % d) ? -1 : abs(result / d)) << endl;
}
