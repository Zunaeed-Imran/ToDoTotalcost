#include <iostream>

using namespace std;

int main () {
  float home, entainment, breakfast, total;

  cout << "Enter Home cost in this month: ";
  cin >> home;

  cout << "Enter Entainment cost in this month: ";
  cin >> entainment;

  cout << "Enter Breakfast :";
  cin >> breakfast;

  total = home + entainment + breakfast;

  cout << "Total cost of this month is: " << total << endl;


  return 0;
}
