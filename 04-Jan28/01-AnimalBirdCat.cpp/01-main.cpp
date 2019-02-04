#include <iostream>
#include "animal.h"
#include "fish.h"
#include "cat.h"
#include "bird.h"
using namespace std;
using namespace sict;
int main() {
  Animal* a[3];
  int i;
  a[0] = new Fish(2);
  a[1] = new Cat(30);
  a[2] = new Bird(300);
  Animal* p;
  for (i = 0; i < 3; i++) {
    cout << a[i] << endl;
  }
  for (i = 0; i < 3; i++) {
    delete a[i];
  }
  // delete[] a; is wrong, 
 //    this is not a dynamic array of Animals
 //    it is an array of animal pointers holding dynamic animals
}