#include <iostream>
using namespace std;

template <typename type = long, int size = 10000>
class Array {
  type m_data[size];
public:
  Array(){}
  type& operator[](unsigned index) {
    return m_data[index%size];
  }
};

int main() {
 Array<> a, b;
 for (int i = 0; i < 5; i++)
    a[i] = i * i;
  b = a;
  for (int i = 0; i < 8; i++)
    std::cout << b[i] << ' ';
  std::cout << endl;
}