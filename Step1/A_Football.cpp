#include <iostream>
#include <string>
using namespace std;
int main()
{
  int i, count, n1 = 0, n2 = 0;
  string s1 = "", s2 = "", x;
  cin >> count >> s1;
  n1++;
  count--;
  for (i = 0; i < count; i++)
  {
    cin >> x;
    if (!(x == s1 || x == s2))
    {
      s2 = x;
    }
    (x == s1) ? n1++ : n2++;
  }
  (n1 > n2) ? cout << s1 : cout << s2;
}
