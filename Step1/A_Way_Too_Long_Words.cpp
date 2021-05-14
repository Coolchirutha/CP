#include <iostream>
#include <string>
#include <vector>
using namespace std;
main()
{
  int count, i;
  cin >> count;
  vector<string> v(count);
  for (i = 0; i < count; i++)
  {
    cin >> v[i];
  }

  for (i = 0; i < count; i++)
  {
    if (v[i].size() > 10)
    {
      cout << v[i][0] << v[i].size() - 2 << v[i].back();
    }
    else
    {
      cout << v[i];
    }
    cout << endl;
  }
}
