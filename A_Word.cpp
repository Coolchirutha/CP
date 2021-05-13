#include <iostream>
using namespace std;
int main()
{
  string s;
  int l = 0, u = 0;
  cin >> s;
  for(char c:s) (isupper(c) ? u:l)++;
  for(char c:s) cout << char( (u>l) ? toupper(c) : tolower(c) );
}
