#include <bits/stdc++.h>

using namespace std;

int main()
{
  int n;
  cin >> n;
  vector<int> top(n), bottom(n);

  for (int i = 0; i < n; i++)
  {
    cin >> top[i] >> bottom[i];
  }

  int topSum = accumulate(top.begin(), top.end(), 0);
  int bottomSum = accumulate(bottom.begin(), bottom.end(), 0);

  if (!(topSum % 2) && !(bottomSum % 2))
  {
    cout << 0;
    return 0;
  }
  else if (n == 1)
  {
    cout << -1;
    return 0;
  }
  else if (!(topSum % 2) + !(bottomSum % 2) == 1)
  {
    cout << - 1;
    return 0;
  }
  else
  {
    for (int i = 0; i < n; i++)
    {
      if ((top[i] % 2) + (bottom[i] % 2) == 1)
      {
        cout << 1;
        return 0;
      }
    }
    cout << -1;
    return 0;
  }

  return 0;
}
