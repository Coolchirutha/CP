#include <iostream>
#include <algorithm>
using namespace std;
main()
{
  int n, k, l, c, d, p, nl, np;
  cin >> n >> k >> l >> c >> d >> p >> nl >> np;
  cout << min(min((k * l) / nl, (p / np)), (c * d)) / n;
}