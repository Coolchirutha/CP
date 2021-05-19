#include <iostream>
#include <algorithm>
using namespace std;
// Creating a struct for the dragon
struct dragon
{
  int HP;
  int bonusHP;
};
// Compare function to compare health of dragons
bool compare(struct dragon &a, struct dragon &b)
{
  return a.HP < b.HP;
}
int main(){
  int count,kHP,i;
  cin >> kHP >> count;
  // creating an array of dragon structures
  struct dragon arr[count];
  for ( i = 0; i < count; i++)
  {
    cin >> arr[i].HP >> arr[i].bonusHP;
  }
  // Sorting the array of structures based on HP
  sort(arr,arr+count,compare);
  // Going through the sorted array
  for ( i = 0; i < count; i++)
  {
    if(arr[i].HP >= kHP){
      cout << "NO";
      return 0;
    }
    kHP+=arr[i].bonusHP;
  }
  cout << "YES";
  return 0;
}
