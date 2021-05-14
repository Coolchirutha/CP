#include <iostream>
#include <set>
using namespace std;
main()
{
  set<char> s;
  char x;
  while (cin >> x)
  {
    s.insert(x);
  }
  if (s.size() % 2 == 0)
  {
    cout << "CHAT WITH HER!";
  }
  else
  {
    cout << "IGNORE HIM!";
  }
}
