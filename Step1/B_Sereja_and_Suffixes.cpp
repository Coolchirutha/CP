#include <bits/stdc++.h>

using namespace std;

int main()
{
  int n,m,x;
  cin >> n >> m;
  int arr[n + 1] = {0}, distCount[n + 1] = {0};
  set<int> dist;
  for (int i = 1; i <= n; i++)
  {
    cin >> arr[i];
  }

  for (int i = n; i > 0; i--)
  {
    dist.insert(arr[i]);
    distCount[i] = dist.size();
  }

  while(m--){
    cin >> x;
    cout << distCount[x] << endl;
  }

  return 0;
}
