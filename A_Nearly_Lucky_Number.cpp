#include <iostream>
using namespace std;
int main()
{
  int count = 0;
  char c;
  while (cin >> c)
  {
    count += (c == '4' || c == '7');
  }
  cout << ((count == 4 || count == 7) ? "YES" : "NO");
  return 0;
}
