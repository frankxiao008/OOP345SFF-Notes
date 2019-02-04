#include <iostream>
#include <cstring>
using namespace std;
#include "bird.h"

namespace sict{


  Bird::Bird(int alt) :m_altitude(alt) {
  }
  void Bird::move()const {
    fly();
  }
  void Bird::fly()const {
    cout << "flys at an altitude of " << m_altitude << "!";
  }
  void Bird::sound()const {
    cout << "Tweet!";
  }
  Animal* Bird::clone()const {
    return new Bird(m_altitude);
  }
  bool Bird::operator==(const Animal& A)const {
    const Bird* fp = dynamic_cast<const Bird*>(&A);
    bool res = false;
    if (fp) res = fp->m_altitude == this->m_altitude;
    return res;
  }
  Bird::~Bird() {
  }


}