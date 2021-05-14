#include <iostream>
#include<set>
using namespace std;
main()
{
  // one way of solving
  // int arr[4], counter = 0;
  // cin >> arr[0];
  // cin >> arr[1];
  // cin >> arr[2];
  // cin >> arr[3];
  // if (arr[0] == arr[1] || arr[0] == arr[2] || arr[0] == arr[3])
  // {
  //   counter++;
  // }
  // if (arr[1] == arr[2] || arr[1] == arr[3])
  // {
  //   counter++;
  // }
  // if (arr[2] == arr[3])
  // {
  //   counter++;
  // }
  set<int> s;
  int x;
  for (int i = 0; i < 4; i++)
  {
    cin >> x;
    s.insert(x);
  }
  cout << 4-s.size();
}
