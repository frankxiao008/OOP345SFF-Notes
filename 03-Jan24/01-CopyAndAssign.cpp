
#include <iostream>
using namespace std;

class IntArray {
  int* m_data = nullptr;
  unsigned m_size = 0u;
public:
  IntArray() {
  }
  IntArray(unsigned size) : m_data(new int[size]), m_size(size) {
  }
  IntArray(unsigned size, const int c_array[]) :IntArray(size) {
    for (; size; m_data[--size] = c_array[size]);
  }
  IntArray(const IntArray& copyFrom) {
    *this = copyFrom;
  }
  IntArray& operator=(const IntArray& copyFrom) {
    if (this != &copyFrom) {
      delete[] m_data;
      m_data = new int[m_size = copyFrom.m_size];
      for (unsigned i = 0u; i < copyFrom.m_size; i++) {
        m_data[i] = copyFrom.m_data[i];
      }
    }
    return *this;
  }
  ~IntArray() {
    delete[] m_data;
  }
  int& operator[](unsigned index) {
    return m_data[index%m_size];
  }
  int operator[](unsigned index) const {
    return m_data[index%m_size] * 1000;
  }
  unsigned size() const {
    return m_size;
  }
};
void prnArray(const IntArray& a) {
  for (unsigned i = 0u; i < a.size(); ++i) {
    cout << a[i] << ' ';
  }
  cout << endl;
}
int main() {
  const unsigned size = 5;
  int x[]{ 10, 20, 30 };
  IntArray a(size);
  IntArray b(3, x);
  for (unsigned i = 0u; i < a.size(); ++i) {
    a[i] = 3 * i;
  }
  cout << endl;
  for (unsigned i = 0u; i < a.size(); ++i) {
    cout << a[i] << ' ';
  }
  cout << endl;
  b = a;
  for (unsigned i = 0u; i < b.size(); ++i) {
    cout << b[i] << ' ';
  }
  cout << endl;
  prnArray(a); 
  prnArray(b);
}

