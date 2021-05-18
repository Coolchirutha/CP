#include <iostream>
using namespace std;
int main()
{
  int n, a, b;
  cin >> n >> a >> b;
  /*
    Assume the line is from 1 to n. (starts at 1, ends at n)
    Let the ith position be a valid position for Petyr. (there are i-1 pple in front and n-i pple behind him)
    Since it's valid, i-1 >= a and n-1<=b
    We can rearrange these equations to a+1 <=i && n-b<= i
    To satisfy both these conditions the minimum value of i must be the max of a+1 and n-b
    Now the person can be in positions from min of i till the end
    Which evaluates to n-max(a+1,n-b)+1
  */
  cout << n - max(a + 1, n - b) + 1 << endl;
}
