#include <bits/stdc++.h>

using namespace std;

int main()
{
  string a;
  cin >> a;
  for (int i = 0; i < a.size(); i++)
  {
    if (a[i] == '0')
    {
      a.erase(a.begin() + i);
      cout << a;
      return 0;
    }
  }
  a.erase(a.begin());
  cout << a;
  return 0;
}
