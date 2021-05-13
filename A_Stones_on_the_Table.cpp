#include <iostream>
using namespace std;
int main()
{
  int length, count = 0;
  cin >> length;
  string s;
  cin >> s;
  for( int i = 0; i<length ; i++ ){
    if(s[i]==s[i+1]) count++;
  }
  cout << count;
  return 0;
}
