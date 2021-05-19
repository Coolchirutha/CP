#include <iostream>
#include <cmath>

using namespace std;

int main()
{
  int count;
  cin >> count;

  /*
    For this problem we can split the total number of rows as -n, -n+1, .... 0, ... , n-1,n which gives a total of 2n+1 rows
    Eg. n = 2 means 5 rows numbered as -2,-1,0,1,2. This will also apply to the row count.
  */
  for (int row = -count; row <= count; ++row)
  {
    /*
      Coming into the definition of a element in the matrix,
      until the first number starts we print a space
    */
    for (int i = 0; i < abs(row); i++)
    {
      cout << "  ";
    }
    /*
      Here the first number is numerically given as n-abs(currentRow).
      When the numbers have started we print the number until the row's max number.
    */
    int numberStart = count - abs(row);
    for (int i = 0; i < numberStart; i++)
    {
      cout << i << " ";
    }
    // After printing the numbers we again print the empty spaces from the start till 0;
    for (int i = numberStart; i > 0; i--)
    {
      cout << i << " ";
    }
    // Giving newline and 0 after a row's end;
    cout << 0 << endl;
  }
  return 0;
}
