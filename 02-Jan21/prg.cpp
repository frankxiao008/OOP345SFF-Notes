#include <iostream>
using namespace std;
class Name {
private:
  char* m_value;
public:
  Name(const char* value = nullptr) :m_value(nullptr) {
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
  for (i = 0; i < sizeof(N) / sizeof(Name); i++) {  // will not work since C++ does know know if N is an array or pointer?
    cout << N[i] << endl;                           // sizeof N will be 4
  }
}
int main() {

  Name A[]{ "Fred", "Jack", "Homer", "Lisa", "Bart" };
  for (Name& nr : A) {
    cout << nr << endl;
  }
  cout << "-----------------------------" << endl;
  for (Name& nr : A) {
    cout << std::move(nr) << endl;
  }
  printNames(A);
  return 0;
}