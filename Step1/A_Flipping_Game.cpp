#include<bits/stdc++.h>
int result,n;
int arr[110];

using namespace std;

int test(int left, int right){
  int c0=0,c1=0;

  for (int i = 0; i < left; i++) c1 += arr[i] == 1;
  for (int i = right+1; i < n; i++) c1 += arr[i] == 1;
  for (int i = left; i <= right; i++) c0 += (arr[i] == 0);
  return c0+c1;
}

int main(){
  //User input
  cin >> n;
  for (int i = 0; i < n; i++) cin >> arr[i];

  // Brute forcing for answer
  for (int i = 0; i < n; i++)
  {
    for (int j = i; j < n; j++)
    {
      result = max(result,test(i,j));
    }

  }
  cout << result << endl;
  return 0;
}
