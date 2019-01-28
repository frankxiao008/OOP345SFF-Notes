#include <iostream>
enum Weekday{sun, mon, tue, wed, thu, fri, sat};
using namespace std;
ostream& operator<<(ostream &os, const Weekday& w) {
  char day[7][11]{ "Sunday", "Monday", "Tuesday", "Wednesday", "Thrusday", "Friday", "Saturday" };
  return os << day[static_cast<int>(w)];
}
Weekday operator++(Weekday& w) {
  return w = static_cast<Weekday>(static_cast<int>(w) + 1);
}
int main() {
  Weekday wd;
  cout << sun << endl;
  cout << thu << endl;
  for (Weekday wd = sun; wd <= sat; ++wd) {
    cout << wd << endl;
  }
  return 0;
}