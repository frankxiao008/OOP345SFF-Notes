// Hexadecimal Representation at an Address
 // hexDump.cpp

#include <iostream>
#include <iomanip>
void hexDump(void*, int);

int main() {
  int i;
  double x;

  std::cout << "Integer value  : ";
  std::cin >> i;
  std::cout << "is : ";
  hexDump(&i, sizeof(i));
  std::cout << std::endl;
  std::cout << "Floating-point value : ";
  std::cin >> x;
  std::cout << "is : ";
  hexDump(&x, sizeof(x));
  std::cout << std::endl;
}

// Dump the first n bytes to the address a
//
void hexDump(void* a, int n) {
  unsigned char* c =
    static_cast<unsigned char*>(a);
  std::cout.fill('0');   // zero fill
  std::cout << std::hex; // hexadecimal output 
  for (int i = 0; i < n; i++)
    std::cout << std::setw(2)
    << (int)c[i] << ' ';
  std::cout.fill(' ');   // blank fill
  std::cout << std::dec; // decimal output
}