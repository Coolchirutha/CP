#include <iostream>
#include <vector>
using namespace std;
int main()
{
  int count, minHeight = 100, minHeightPos = 0, maxHeight = 0, maxHeightPos = 0;
  cin >> count;
  vector<int> line(count);
  for (int i = 0; i < count; i++)
  {
    cin >> line[i];
    if (minHeight >= line[i])
    {
      minHeight = line[i];
      minHeightPos = i;
    }
    if (maxHeight < line[i])
    {
      maxHeight = line[i];
      maxHeightPos = i;
    }
  }
  if(maxHeightPos>minHeightPos) minHeightPos++;
  cout << maxHeightPos + count - minHeightPos - 1 << endl;
  return 0;
}
