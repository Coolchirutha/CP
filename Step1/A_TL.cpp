#include <iostream>

using namespace std;

int main()
{
  int n, m, x, rMin = 10000, rMax = 0, wMin = 10000;

  for (cin >> n >> m; n--;)
    cin >> x, rMax = max(x, rMax), rMin = min(x, rMin);

  for (; m--;)
    cin >> x, wMin = min(x, wMin);

  cout << ((max(rMax, 2 * rMin) < wMin) ? max(rMax, 2 * rMin) : -1);

  return 0;
}
