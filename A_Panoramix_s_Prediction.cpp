#include <iostream>
using namespace std;
int main()
{
  int primeArray[] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 51};
  int i, m, n;
  bool flag = true;
  cin >> n;
  cin >> m;
  for (i = 0; primeArray[i] != n; i++)
    ;
  if (primeArray[i+1] == m)
    cout << "YES";
  else
    cout << "NO";
  return 0;
}
