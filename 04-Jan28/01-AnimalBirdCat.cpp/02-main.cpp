#include <iostream>
#include "animal.h"
#include "fish.h"
#include "cat.h"
#include "bird.h"
using namespace std;
using namespace sict;
int main() {
  Animal* a[3]{ new Fish(20), new Cat(30), new Bird(200) };
  int i;
  Animal* p;
  Fish F(20);
  for (i = 0; i < 3; i++) {
    p = a[i]->clone();
    cout << p << endl;
    if (F == (*p)) {
      cout << "got the same fish " << endl;
    }
    delete p;
  }
  for (i = 0; i < 3; i++) {
    delete a[i];
  }
  return 0;
}