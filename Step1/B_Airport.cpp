#include <bits/stdc++.h>

using namespace std;

int main()
{
  int passengers, curPassengers, flights, minProfit = 0, maxProfit = 0;
  cin >> passengers >> flights;
  int flightSeats1[flights], flightSeats2[flights];

  for (int i = 0; i < flights; i++)
  {
    cin >> flightSeats1[i];
    flightSeats2[i] = flightSeats1[i];
  }

  curPassengers = passengers;
  int i=0;
  while (curPassengers)
  {
    sort(flightSeats1, flightSeats1 + flights);
    if(!flightSeats1[i]) i++;
    minProfit += flightSeats1[i];
    flightSeats1[i]--;
    curPassengers--;
  }

  curPassengers = passengers;
  while (curPassengers)
  {
    sort(flightSeats2, flightSeats2 + flights, greater<int>());
    maxProfit += flightSeats2[0];
    flightSeats2[0]--;
    curPassengers--;
  }

  cout << maxProfit << " " << minProfit;

  return 0;
}
