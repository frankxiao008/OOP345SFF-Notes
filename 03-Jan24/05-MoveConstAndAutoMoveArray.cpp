
#include <iostream>
#include <string>
using namespace std;

class IntArray {
  int* m_data = nullptr;
  unsigned m_size = 0u;

public:
  IntArray() {
  }
  IntArray(unsigned size, const int c_array[]):IntArray(size) {
    for (; size; m_data[--size] = c_array[size]);
  }
  IntArray(unsigned size) : m_data(new int[size]), m_size(size) {
  }
  IntArray(const IntArray& copyFrom) {
    *this = copyFrom;
  }
  IntArray(IntArray&& moveFrom) {
    *this = moveFrom;
  }
  IntArray& operator=(const IntArray& copyFrom) {
    cout << "copying!" << endl;
    if (this != &copyFrom) {
      delete[] m_data;
      m_data = new int[m_size = copyFrom.m_size];
      for (unsigned i = 0u; i < copyFrom.m_size; i++) {
        m_data[i] = copyFrom.m_data[i];
      }
    }
    return *this;
  }
  IntArray& operator=(IntArray&& rightOp) {
    cout << "moving!" << endl;
    if (this != &rightOp) {
      delete[] m_data;
      m_data = rightOp.m_data;
      m_size = rightOp.m_size;
      rightOp.m_data = nullptr;
      rightOp.m_size = 0u;
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
    return m_data[index%m_size];
  }
  unsigned size() const { return 
    m_size; 
  }
};
void prnArray(const IntArray& a,const char* title) {
  cout << title << ": " <<endl;
  if(a.size() > 0) for (unsigned i = 0u; i < a.size(); ++i) {
    cout << a[i] << ' ';
  }
  else {
    cout << "EMPTY!";
  }
  cout << endl;
}
int main() {
  const unsigned size = 5;
  int c[]{ 10, 20, 30 };
  IntArray a(size), b;
  for (unsigned i = 0u; i < a.size(); ++i) {
    a[i] = 3 * i;
  } 
  prnArray(a, "intitial A: ");
  b = a;
  prnArray(a, "A after copy: ");
  prnArray(b, "B after copy: ");
  for (unsigned i = 0u; i < a.size(); ++i) {
    a[i] += 100;
  }
  prnArray(a, "100 added to each element of A: ");
  b = std::move(a);
  prnArray(a, "A after move: ");
  prnArray(b, "B after move: ");
  b = IntArray(3, c);
  prnArray(b, "B after automatic move!");
  return 0;
}

