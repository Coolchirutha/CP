#include <iostream>
#include <string>
using namespace std;
int main()
{
  int i;
  string s;
  cin >> s;
  for (i = 0; i < s.size(); i++)
  {
    if (s[i] != 'W' || s[i + 1] != 'U' || s[i + 2] != 'B')
    {
      cout << s[i];
      if (s[i + 1] == 'W' && s[i + 2] == 'U' && s[i + 3] == 'B')
        cout << ' ';
    }
    else
      i += 2;
  }
}
