#include <iostream>
using namespace std;
int k, l, m, n, d;
main()
{
  int count = 0;
  cin >> k >> l >> m >> n >> d;
  for (int i = 1; i <= d; i++)
  {
    if (((i >= k) && (i % k == 0)) || ((i >= l) && (i % l == 0)) || ((i >= m) && (i % m == 0)) || ((i >= n) && (i % n == 0)))
    {
        count++;
    }
  }
  cout << count;
}
