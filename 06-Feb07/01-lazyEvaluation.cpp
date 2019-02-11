#include <iostream>
using namespace std;
int main(int argc, char* argv[]) {
  int i = 10;
  int j = 3;
  cout << "J: " << j << endl;
  cout << "i: " << i << endl;

  if (i < 3 && (j = j + 1)) {
    cout << "condition is true!" << endl;
  }
  else {
    cout << "condition is false!" << endl;
  }
  cout << "J: " << j << endl;
  cout << "i: " << i << endl;
  
  return 0;
}