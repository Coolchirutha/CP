#include <iostream>
main()
{
  char c;
  int a = 0;
  while (c != '\n')
  {
    c = getchar();
    if (c == 'H' || c == 'Q' || c == '9')
      a = 1;
  }
  puts((a == 1) ? "YES" : "NO");
}
