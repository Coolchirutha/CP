#include <bits/stdc++.h>

using namespace std;

int main()
{
  int n, m, i, j;
  char c;
  cin >> n >> m;
  // Taking each element and printing it while input is being given
  for (i = 0; i < n; i++)
  {
    for (j = 0; j < m; j++)
    {
      cin >> c;
      // Changing c only if c is "."
      if (c == '.')
      {
        // Fixing odd places as 'B' and even places as 'W'
        // and changing value of c as needed
        c = (i + j) % 2 == 0 ? 'B' : 'W';
      }
      // Printing value of c as needed
      cout << c;
    }
    cout << endl;
  }
}
