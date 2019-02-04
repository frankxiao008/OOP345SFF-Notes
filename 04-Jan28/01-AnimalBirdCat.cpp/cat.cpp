#include <iostream>
#include <cstring>
using namespace std;
#include "cat.h"


namespace sict {
  Cat::Cat(int speed) :m_speed(speed) {
  }
  void Cat::move()const {
    run();
  }
  void Cat::run()const {
    cout << "runs at the speed of " << m_speed << " km/h!";
  }
  void Cat::sound()const {
    cout << "Meow!";
  }
  Animal* Cat::clone()const {
    return new Cat(m_speed);
  }
  bool Cat::operator==(const Animal& A)const {
    const Cat* cp = dynamic_cast<const Cat*>(&A);
    bool res = false;
    if (cp) res = cp->m_speed == this->m_speed;
    return res;
  }
  Cat::~Cat() {
  }
}