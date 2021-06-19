#include <bits/stdc++.h>

using namespace std;

int main()
{
  int hashmap[1000010] = {0};
  int a, b, c, result = 0;
  for (int i = 1; i <= 1000000; i++)
  {
    for (int j = i; j <= 1000000; j+=i)
    {
      hashmap[j]++;
    }
  }
  // cout << hashmap[20] << endl;


  cin >> a >> b >> c;

  for (int i = 1; i <= a; i++)
  {
    for (int j = 1; j <= b; j++)
    {
      for (int k = 1; k <= c; k++)
      {
        result += hashmap[i * j * k];
      }
    }
  }

  cout << result;
}
