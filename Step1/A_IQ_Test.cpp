#include <bits/stdc++.h>

using namespace std;

int main()
{
  char arr[4][4];
  for (int i = 0; i < 4; i++)
  {
    for (int j = 0; j < 4; j++)
    {
      cin >> arr[i][j];
    }
  }
  for (int i = 0; i < 3; i++)
  {
    for (int j = 1; j < 4; j++)
    {
      int count = 0;
      (arr[i][j] == '.') ? count++ : count--;
      (arr[i][j - 1] == '.') ? count++ : count--;
      (arr[i + 1][j] == '.') ? count++ : count--;
      (arr[i + 1][j - 1] == '.') ? count++ : count--;
      if ((count == 2) || (count == -2))
      {
        cout << "YES";
        return 0;
      }
      if ((count == 4) || (count == -4))
      {
        cout << "YES";
        return 0;
      }
    }
  }
  cout << "NO";
}
