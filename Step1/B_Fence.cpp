#include <bits/stdc++.h>

using namespace std;

int main()
{
  int n, k, minSum = 0, curSum = 0, result = 1;
  cin >> n >> k;
  int arr[n];
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
    if (i < k)
    {
      minSum += arr[i];
      curSum += arr[i];
    }
    else
    {
      curSum += (arr[i]-arr[i-k]);
      if(curSum<minSum){
        minSum = curSum;
        result = (i-k)+2;
      }
    }
  }
  cout << result;
}
