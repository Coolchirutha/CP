#include <iostream>

using namespace std;

int main()
{

  int n, oddCount = 0;
  cin >> n;
  int arr[n], x, hashmap[8] = {0};
  for (int i = 0; i < n; i++)
  {
    cin >> x;
    hashmap[x]++;
  }

  n /= 3;

  if (hashmap[1] == n && hashmap[2] + hashmap[3] == n && hashmap[2] >= hashmap[4] && hashmap[4] + hashmap[6] == n && hashmap[6] >= hashmap[3])
  {
    while (hashmap[4])
    {
      hashmap[4]--;
      hashmap[2]--;
      cout << "1 2 4" << endl;
    }
    while (hashmap[2])
    {
      hashmap[2]--;
      cout << "1 2 6" << endl;
    }
    while (hashmap[3])
    {
      hashmap[3]--;
      cout << "1 3 6" << endl;
    }
  }
  else
    cout << -1;

  return 0;
}
