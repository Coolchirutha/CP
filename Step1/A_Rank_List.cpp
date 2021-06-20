#include <bits/stdc++.h>

using namespace std;

int main()
{
  int n, k;
  cin >> n >> k;
  int score[n];
  for (int i = 0; i < n; i++)
  {
    int pi, ti;
    cin >> pi >> ti;
    score[i] = (pi * 50) - ti;
  }
  sort(score, score + n, greater<int>());
  cout << count(score,score+n,score[k-1]);
  return 0;
}
