
#include <iostream>
using namespace std;

int getint(bool (*valid)(int)) { // getint logic is bad, don't look at it!
  int val;
  bool done = false;
  do {
    cin >> val;
    if (cin.fail()) {
      cout << "bad int" << endl;
      cin.clear();
      cin.ignore(100, '\n');
      done = false;
    }
    else if(valid(val)){
      done = true;
    }
    else {
      done = false;
    }
  } while (!done);
  return val;
}

bool validMark(int mark) {
  return mark >= 0 && mark <= 100;
}
bool validAge(int age) {
  return age >= 1 && age <= 120;
}

int main(void) {
  int mark, age;
  cout << "mark: ";
  mark = getint(validMark);
  cout << "age: ";
  mark = getint(validAge);
  return 0;
}