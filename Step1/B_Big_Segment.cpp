#include <bits/stdc++.h>

using namespace std;

int main()
{
  int n, num1, num2, min, max, result = -1;
  cin >> n;

  for (int i = 0; i < n; i++)
  {
    cin >> num1 >> num2;

    if (i == 0)
    {
      min = num1;
      max = num2;
    }

    if (num1 < min)
    {
      min = num1;
      result = -1;
    }

    if (max < num2)
    {
      max = num2;
      result = -1;
    }

    if (num1 == min && num2 == max)
    {
      result = i + 1;
    }
  }

  cout << result;

  return 0;
}
