
#include <iostream>
#include <string>
using namespace std;
template <typename type>
class Array {
  type* m_data = nullptr;
  unsigned m_size = 0u;
  void addTen(int size);
public:
  Array() {
  }
  Array(unsigned size, const type c_array[]) :Array<type>(size) {
    for (; size; m_data[--size] = c_array[size]);
  }
  Array(unsigned size) : m_data(new type[size]), m_size(size) {
  }
  Array(const Array<type>& copyFrom) {
    *this = copyFrom;
  }
  Array(Array<type>&& moveFrom) {
    *this = std::move(moveFrom);
  }
  Array<type>& operator=(const Array<type>& copyFrom) {
    if (this != &copyFrom) {
      delete[] m_data;
      m_data = new type[m_size = copyFrom.m_size];
      for (unsigned i = 0u; i < copyFrom.m_size; i++) {
        m_data[i] = copyFrom.m_data[i];
      }
    }
    return *this;
  }
  Array<type>& operator=(Array<type>&& rightOp);
  ~Array() { 
    delete[] m_data;
  }
  type& operator[](unsigned index) {
    if (index >= m_size) {
      addTen(index);
    }
    return m_data[index];
  }
  type operator[](unsigned index) const {
    return m_data[index%m_size];
  }
  unsigned size() const { return 
    m_size; 
  }
};


template <typename type>
Array<type>& Array<type>::operator=(Array<type>&& rightOp) {
  if (this != &rightOp) {
    delete[] m_data;
    m_data = rightOp.m_data;
    m_size = rightOp.m_size;
    rightOp.m_data = nullptr;
    rightOp.m_size = 0u;
  }
  return *this;
}

template <typename type>
void Array<type>::addTen(int size) {
  size += 10;
  type* temp = new type[size];
  for (int i = 0; i < m_size; i++) {
    temp[i] = m_data[i];
  }
  m_size = size;
  delete[] m_data;
  m_data = temp;
}


template <typename type>
void prnArray(const Array<type>& a,const char* title) {
  cout << title << ": ";
  for (unsigned i = 0u; i < a.size(); ++i) {
    cout << a[i] << ' ';
  }
  cout << endl;
}


int main() {
  Array<double> a(5);
  for (int i = 0; i < 20; i++)
    a[i] = i * 10.23;
  for (int i = 0; i < 20; i++)
    std::cout << a[i] << ' ';
  std::cout << endl;
  return 0;
}

