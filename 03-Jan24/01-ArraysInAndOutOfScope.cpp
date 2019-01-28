#include <iostream>
#include <utility>
using namespace std;
class Name {
private:
  char* m_value;
public:
  Name(const char* value = nullptr):m_value(nullptr) {
    if (value) {
      int size = 0;
      while (value[size++]);
      m_value = new char[size--];
      for (m_value[size] = value[size]; size; m_value[--size] = value[size]);
    }
  }
  ostream& print(ostream& os)const {
    if (m_value) os << m_value;
    return os;
  }
  ~Name() {
    if (m_value) delete[] m_value;
  }
};
ostream& operator<< (ostream& os, const Name& N) {
  os << "lvalue: ";
  return N.print(os);
}
ostream& operator<< (ostream& os, Name&& N) {
  os << "rvalue: ";
  return N.print(os);
}

void printNames(Name N[]) {
  int i;
  for (i = 0; i < sizeof(N) / sizeof(Name); i++) {
    cout << N[i] << endl;
  }
}

int main() {
  int i;
  Name A[]{ "Fred", "Jack", "Homer", "Lisa", "Bart" };
  for (i = 0; i < sizeof(A) / sizeof(Name); i++) {
    cout << A[i] << endl; 
  }
  cout << "---Call to sizeof from the printName function does not work:" << endl;
  printNames(A);
  return 0;
}

