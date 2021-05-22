#include <bits/stdc++.h>

using namespace std;

int main()
{
  int m, n, minDiff = INT_MAX;
  cin >> n >> m;

  vector<int> arr(m);
  for (auto &i : arr)
  {
    cin >> i;
  }

  // Firstly we sort the array
  sort(arr.begin(), arr.end());

  // Now we consider the n elements taking from first element to (n-1)th element and find the range so as to get minimum difference
  for (int i = 0; i + (n - 1) < arr.size(); i++)
  {
    if (arr[i + (n - 1)] - arr[i] < minDiff)
    {
      minDiff = arr[i + (n - 1)] - arr[i];
    }
  }

  cout << minDiff;

  return 0;
}
