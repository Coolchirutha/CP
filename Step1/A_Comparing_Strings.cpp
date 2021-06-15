#include <bits/stdc++.h>

using namespace std;

int main()
{

  string s1, s2;
  vector<int> err;
  cin >> s1 >> s2;

  if (s1.length() != s2.length())
  {
    cout << "NO";
    return 0;
  }

  for (int i = 0; i < s1.length(); i++)
  {
    if (s1[i] != s2[i])
    {
      err.push_back(i);
    }
  }

  if(err.size() != 2){
    cout << "NO";
    return 0;
  }

  swap(s2[err[0]], s2[err[1]]);
  (s1 == s2) ? cout << "YES" : cout << "NO";

  return 0;
}
