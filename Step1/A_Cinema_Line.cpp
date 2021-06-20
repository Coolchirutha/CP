#include <bits/stdc++.h>

using namespace std;

int main()
{
  int n, x;
  cin >> n;
  int hashtable[3] = {0};
  for (int i = 0; i < n; i++)
  {
    cin >> x;
    switch (x)
    {
    case 25:
      hashtable[0]++;
      break;
    case 50:
      if (hashtable[0] > 0)
      {
        hashtable[0]--;
        hashtable[1]++;
      }
      else
      {
        cout << "NO";
        return 0;
      }
      break;
    case 100:if(hashtable[1]>=1 && hashtable[0]>=1){
      hashtable[0]--;
      hashtable[1]--;
      hashtable[2]++;
    } else if(hashtable[0]>=3){
      hashtable[0]-=3;
      hashtable[2]++;
    } else{
      cout << "NO";
      return 0;
    }
      break;

    default:
      break;
    }
  }

  cout << "YES";

  return 0;
}
