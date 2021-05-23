#include <bits/stdc++.h>

using namespace std;

int main()
{
  string s, hello = "olleh";
  cin >> s;

  if (s.length() < 4)
  {
    cout << "NO";
    return 0;
  }

  for (auto &letter : s)
  {
    if (!hello.length())
    {
      cout << "YES";
      return 0;
    }
    if (hello.back() == letter)
    {
      hello.pop_back();
    }
  }

  if (!hello.length())
  {
    cout << "YES";
    return 0;
  }
  else
  {
    cout << "NO";
    return 0;
  }

  return 0;
}
