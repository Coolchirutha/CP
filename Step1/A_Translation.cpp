#include <iostream>
#include <string>
using namespace std;
main()
{
  string s1, s2;
  cin >> s1 >> s2;
  (string(s1.rbegin(), s1.rend()) == s2) ? cout << "YES" : cout << "NO";
}
