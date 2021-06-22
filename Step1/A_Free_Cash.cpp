#include <bits/stdc++.h>

using namespace std;

int main()
{
  int n, h, m, hashtable[1500] = {0}, result = -1, maxValue = -1;
  cin >> n;
  while (n--)
  {
    cin >> h >> m;
    hashtable[(h * 60) + m]++;
    maxValue = max(maxValue, (h * 60) + m);
  }

  for (int i = 0; i <= maxValue; i++)
  {
    result = max(result, hashtable[i]);
  }

  cout << result << endl;
  return 0;
}
