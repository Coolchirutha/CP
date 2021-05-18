#include <iostream>
using namespace std;
int main()
{
  char n1 = '0', n2 = '0', n3 = '0', x;
  bool flag = true;
  while (cin >> x)
  {
    switch (x)
    {
    case '1':
      break;
    case '4':
      if (!(n2 == '1' || n3 == '1'))
      {
        flag = false;
      }
      break;

    default:
      flag = false;
      break;
    }
    n1 = n2;
    n2 = n3;
    n3 = x;
  }
  (flag) ? cout << "YES" : cout << "NO";
}
