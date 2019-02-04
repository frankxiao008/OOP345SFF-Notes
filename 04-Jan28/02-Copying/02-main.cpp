#include <iostream>
#include "fish.h"
#include "cat.h"
#include "bird.h"
using namespace std;
using namespace sict;
int main() {
  Animal* a[3];
  a[0] = new Fish(2);
  a[1] = new Cat(30);
  a[2] = new Bird(300);
  Animal* p;
  int i;
  for (i = 0; i < 3; i++) {
    cout << a[i] << endl;
  }
  for (i = 0; i < 3; i++) {
    p = a[i]->clone();
    cout << p << endl;
    delete p;
  }
  for (i = 0; i < 3; i++) {
    delete a[i];
  }
  return 0;
}