#include <iostream>
using namespace std;
int add(int a, int b) {
  return a + b;
}
int sub(int a, int b) {
  return a - b;
}

int main() {
  int a;
  int (*fptr)(int, int);
  fptr = add;
  a = fptr(10, 20);
  cout << a << endl;
  fptr = sub;
  a = fptr(10, 20);
  cout << a << endl;
  return 0;
}