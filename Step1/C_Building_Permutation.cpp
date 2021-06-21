#include <bits/stdc++.h>

using namespace std;

int main()
{
  long long n, result = 0;
  cin >> n;
  long long arr[n];
  for (long long i = 0; i < n; i++)
  {
    cin >> arr[i];
  }

  sort(arr, arr + n);
  for (long long i = 0; i < n; i++)
  {
    result += abs(arr[i] - (i + 1));
  }
  cout << result;
}
