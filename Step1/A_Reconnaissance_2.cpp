#include<iostream>
#include<cmath>
#include<vector>
using namespace std;
main(){
  int count,i,minDiff,pos1,pos2;
  cin>> count;
  vector<int> arr(count);
  for ( i = 0; i < count; i++)
  {
    cin>>arr[i];
  }
  minDiff = abs(arr[i-1]-arr[0]);
  pos1 = count;
  pos2 = 1;
  for ( i = 0; i < count-1; i++)
  {
    if(abs(arr[i]-arr[i+1]) < minDiff){
      pos1 = i+1;
      pos2 = i+2;
       minDiff = abs(arr[i]-arr[i+1]);
    }
  }
  cout << pos1 << " " << pos2;
}
