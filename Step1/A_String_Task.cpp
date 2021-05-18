#include<iostream>
#include<string>
using namespace std;
int main(){
  string s,result;
  cin >> s;
  for(char i:s){
    switch (i)
    {
    case 'A':
    case 'E':
    case 'I':
    case 'O':
    case 'U':
    case 'Y':
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
    case 'y':
      break;
    default:
    result+=".";
    result+=tolower(i);
      break;
    }
  }
  cout << result;
}
