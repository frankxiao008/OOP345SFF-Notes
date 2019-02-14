#include <iostream>
using namespace std;
bool ascending(double a, double b) {
  return a > b;
}

bool descending(double a, double b) {
   return a < b;
}

// bubble sort
void sort(double* arr, int n, bool(*comp)(double, double)) {
  for (int i = n - 1; i > 0; i--) {
    for (int j = 0; j < i; j++) {
      if (comp(arr[j], arr[j + 1])) {
        double temp = arr[j];
        arr[j] = arr[j + 1];
        arr[j + 1] = temp;
      }
    }
  }
}


void display(double* a, int n) {
  for (int i = 0; i < n; i++)
    cout << a[i] << endl;
}

int main() {
  double a[] = { 1.1, 5.3, 2.5, 3.6, 6.2, 7.3, 2.1 };
  int n = sizeof a / sizeof(double);

  cout << "-----------------------------" << endl;
  sort(a, n, ascending);
  display(a, n);
  cout << "-----------------------------" << endl;
  sort(a, n, descending);
  display(a, n);
}