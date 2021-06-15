#include <bits/stdc++.h>

using namespace std;

int main()
{
  int arr[6][6], line[6] = {0, 1, 2, 3, 4, 5}, result = 0;
  for (int i = 1; i <= 5; i++)
  {
    for (int j = 1; j <= 5; j++)
    {
      cin >> arr[i][j];
    }
  }

  do
  {
    int sum = 0;
    for (int i = 1; i < 5; i++)
    {
      for (int j = i + 1; j <= 5; j += 2)
      {
        sum += arr[line[j - 1]][line[j]] + arr[line[j]][line[j - 1]];
      }
    }
    result = max(sum, result);
  } while (next_permutation(line + 1, line + 6));

  cout << result;

  return 0;
}
