#include<iostream>
using namespace std;
main(){
  int count,x , left = 0, right = 0;
  cin >> count;
  for (int i = 0; i < count; i++)
  {
    cin>>x;
    left += x;
    cin>>x;
    right +=x;
  }
  cout << min(right, count-right) + min(left,count-left);
  
}
