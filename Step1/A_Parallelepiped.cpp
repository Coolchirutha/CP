#include <iostream>
#include <cmath>
using namespace std;
main()
{
  int x, y, z;
  cin >> x >> y >> z;
  cout << (4 * (sqrt((z * y) / x) + sqrt((x * z) / y) + sqrt((x * y) / z)));
}
