#include <iostream>
using namespace std;
int main()
{
  long long m, count, x, vasya = 0, petya = 0;
  cin >> count;
  long long a[count], b[count];
  for (int i = 0; i < count; i++)
  {
    cin >> a[i];
    b[a[i]] = i + 1;
  }
  cin >> m;
  while (m--)
  {
    cin >> x;
    vasya += b[x];
    petya += count - b[x] + 1;
  }
  cout << vasya << " " << petya << endl;
  return 0;
}
