#include <iostream>
using namespace std;
main()
{
  long long count, k;
  cin >> count >> k;
  long long halfCount = ((count + 1) / 2);
  /* 
    Here halfCount is basically counting the number odd numbers
    This will be subtracted from k when we need an even number
  */
  if (k <= halfCount)
  {
    cout << (2 * k) - 1;
  }
  else
  {
    cout << (2 * (k - halfCount));
  }
}
