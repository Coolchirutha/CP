#include <iostream>
using namespace std;
main()
{
  int x = 0, count;
  char inp;
  cin >> count;
  while (count--)
  {
    cin >> inp;
    switch (inp)
    {
    case 'X':
      cin >> inp;
      if (inp == '+')
      {
        cin >> inp;
        x++;
      }
      else
      {
        cin >> inp;
        x--;
      }
      break;

    case '+':
      cin >> inp;
      cin >> inp;
      x++;
      break;

    case '-':
      cin >> inp;
      cin >> inp;
      x--;
      break;
    }
  }
  cout << x;
}
