#include <bits/stdc++.h>
using namespace std;
main()
{
  string guest, host, pile, combination;
  cin >> guest >> host >> pile;
  combination = guest + host;
  sort(combination.begin(), combination.end());
  sort(pile.begin(), pile.end());
  (combination == pile) ? cout << "YES" : cout << "NO";
}
