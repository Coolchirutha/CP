#include <bits/stdc++.h>

using namespace std;

int main()
{
  int n, count = 0;
  cin >> n;
  for (int a = 1; a < n; a++)
  {
    for (int b = a; (a * a) + (b * b) <= (n * n); b++)
    {
      int c = sqrt((a*a)+(b*b));
      if((c*c)==((a*a)+(b*b))){
        count++;
      }
    }
  }
  cout << count;
}
