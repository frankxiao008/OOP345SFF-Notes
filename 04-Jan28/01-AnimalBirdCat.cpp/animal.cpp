#include <iostream>
using namespace std;
#include "animal.h"
namespace sict{
  ostream& operator<<(ostream& OS, const Animal& a) {
    a.move();
    OS << " and sounds like ";
    a.sound();
    OS << " ";
    a.sound();
    return OS;
  }
  ostream& operator<<(ostream& OS, const Animal* ap) {
    if (ap) {
      OS << *ap;
    }
    else {
      OS << "No animal here!";
    }
    return OS;
  }
}
