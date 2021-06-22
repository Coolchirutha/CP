#include <bits/stdc++.h>

using namespace std;

int main()
{
  long long n;
  cin >> n;

  long long unsortedArr[n + 1] = {0}, sortedArr[n + 1] = {0};
  long long unsortedSum[n + 1] = {0}, sortedSum[n + 1] = {0};

  for (int i = 1; i <= n; i++)
  {
    cin >> unsortedArr[i];
    sortedArr[i] = unsortedArr[i];
    unsortedSum[i] += (unsortedArr[i] + unsortedSum[i - 1]);
  }

  sort(sortedArr, sortedArr + n + 1);
  for (int i = 1; i <= n; i++)
  {
    sortedSum[i] += (sortedArr[i] + sortedSum[i - 1]);
  }

  long long m;
  cin >> m;
  for (int i = 0; i < m; i++)
  {
    int curCase, l, r;
    cin >> curCase >> l >> r;
    cout << ((curCase - 1) ? (sortedSum[r] - sortedSum[l - 1]) : (unsortedSum[r] - unsortedSum[l - 1])) << endl;
  }

  return 0;
}
