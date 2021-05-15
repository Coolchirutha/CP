#include <iostream>
using namespace std;
main()
{
  int count, read[7];
  bool flag = true;
  cin >> count >> read[0] >> read[1] >> read[2] >> read[3] >> read[4] >> read[5] >> read[6];
  while (flag)
  {
    for (int i = 0; i < 7; i++)
    {
      if (read[i] >= count)
      {
        cout << i+1;
        flag = !flag;
        break;
      }
      // cout << count << " " << read[i] << " " << i << endl;
      count -= read[i];
    }
  }
}
