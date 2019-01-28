#include <iostream>
#include "Box.h"
using namespace std;
using namespace sict;
int main() {
  Box b(3, 5);
  Box* p[]{ new Box(4), new Box(3) };
  cout << "total of " << Box::num() << " Box" << (Box::num() > 1 ? "es" : "") 
    << " in the system" << endl;
  cout << b << endl << *p[0] << endl << *p[1] << endl;
  delete p[0];
  cout << "total of " << Box::num() << " Box" << (Box::num() > 1 ? "es" : "")
    << " in the system" << endl;
  delete p[1];
  cout << "total of " << Box::num() << " Box" << (Box::num() > 1 ? "es" : "")
    << " in the system" << endl;
  return 0;
}
