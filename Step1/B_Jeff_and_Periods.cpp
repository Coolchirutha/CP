#include <bits/stdc++.h>
using namespace std;

int hashTable[100001], commonDiff[100001];
bool notAP[100001];

int main()
{
  int n, a, count = 0;
  cin >> n;
  for (int i = 1; i <= n; ++i)
  {
    cin >> a;
    // By default they are in AP, so if they aren't then no need to check just skip
    if (notAP[a])
    {
      continue;
    }
    // If the hashtable element has a value then perform test else add the new element to hashtable
    if (hashTable[a])
    {
      // If commonDifference[a] doesn't exist then create one
      if (!commonDiff[a])
      {
        commonDiff[a] = i - hashTable[a];
      } // If commonDifference[a] exists then check if its in AP
      else if (commonDiff[a] != i - hashTable[a])
      {
        // If it isnt in AP then remove from count and mark them not in AP
        notAP[a] = 1;
        --count;
      }
    }
    else
    {
      ++count;
    }
    hashTable[a] = i;
  }

  cout << count << endl;

  // Going through each element and printing necessary elements
  for (int i = 1; i < 100001; ++i)
  {
    if (hashTable[i] && !notAP[i])
    {
      cout << i << " " << commonDiff[i] << endl;
    }
  }
}
