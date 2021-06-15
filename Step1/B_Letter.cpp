#include <bits/stdc++.h>
using namespace std;
int main()
{
  int p;
  string s1, s2;
  // Taking input using getline s
  getline(cin, s1);
  getline(cin, s2);
  for (int i = 0; i < s2.length(); i++)
  {
    // Testing only when character is non space
    if (s2[i] != ' ')
    {
      // Searching for the character in the original string
      // Find returns the position of character else -1
      int s = s1.find(s2[i]);
      if (s == -1)
      {
        // If character not found then exit since we cant construct
        cout << "NO";
        return 0;
      }
      else
      {
        // If character is found we erase it from string so as to avoid duplicates
        s1.erase(s1.begin() + s);
      }
    }
  }
  // If it finds all elements them print YES
  cout << "YES";
  return 0;
}
