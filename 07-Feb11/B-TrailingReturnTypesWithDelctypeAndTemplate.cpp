#include <iostream>
using namespace std;
template <typename T, typename U>
auto divide(const T& a, const U& b) -> decltype(a/b) {
  return a / b;
}

int main(void) {
  int i = 12, j = 6;
  double x = 4.5;
  cout << divide(i, j) << endl;
  cout << divide(i, x) << endl;
  return 0;
}