#include <bits/stdc++.h>

using namespace std;

bool isPrime(long long n)
{
  for (int i = 2; i * i <= n; i++)
  {
    if (n % i == 0)
      return false;
  }
  return true;
}

int main()
{
  int n;
  long long x, y;
  cin >> n;

  while (n--)
  {
    cin >> x;
    y = sqrt(x);
    cout << ((x > 1 && y * y == x && isPrime(y)) ? "YES" : "NO") << endl;
  }
}
