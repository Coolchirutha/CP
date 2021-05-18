#include <iostream>
#include <vector>
using namespace std;
int main()
{
  int i, j, count1, count2, maxRatio = 0, maxRatioCount = 0;
  cin >> count1;
  vector<int> arr1(count1);
  for (i = 0; i < count1; i++)
  {
    cin >> arr1[i];
  }
  cin >> count2;
  vector<int> arr2(count2);
  for (i = 0; i < count2; i++)
  {
    cin >> arr2[i];
  }
  for (i = 0; i < arr1.size(); i++)
  {
    for (j = 0; j < arr2.size(); j++)
    {
      if ((arr2[j] % arr1[i] == 0) && (arr2[j] / arr1[i] >= maxRatio))
      {
        if(arr2[j]/arr1[i] == maxRatio){
          maxRatioCount++;
          continue;
        }
        maxRatioCount = 1;
        maxRatio = arr2[j] / arr1[i];
      }
    }
  }
  cout << maxRatioCount;
}
