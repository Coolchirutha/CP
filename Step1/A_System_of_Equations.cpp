#include <iostream>
int a, b, m, n, s;
int main()
{
  for (std::cin >> n >> m; a < 32; a++)
    for (b = 0; b < 32; b++)
      s += a * a + b == n & a + b * b == m;
  std::cout << s;
}
