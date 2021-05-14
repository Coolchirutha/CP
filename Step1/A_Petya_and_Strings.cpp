#include <iostream>
#include <string>
using namespace std;
int main()
{
  string a, b;
  cin >> a >> b;
  for (int i = 0; i < a.length(); i++)
  {
    if (tolower(a[i]) < tolower(b[i]))
    {
      cout << -1;
      return 0;
    }
    else if (tolower(a[i]) > tolower(b[i]))
    {
      cout << 1;
      return 0;
    }
    else if (tolower(a[i]) == tolower(b[i]))
    {
      continue;
    }
  }
  cout << 0;
  return 0;
}
