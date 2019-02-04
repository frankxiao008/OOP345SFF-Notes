#include <iostream>
#include <cstring>
using namespace std;
#include "fish.h"

namespace sict{
  Fish::Fish(int depth) :m_depth(depth) {
  }
  void Fish::move()const {
    swim();
  }
  void Fish::swim()const {
    cout << "swims " << m_depth << " feet under the water";
  }
  Animal* Fish::clone()const {
    return new Fish(m_depth);
  }
  void Fish::sound()const {
    cout << "Glub!";
  }
  bool Fish::operator==(const Animal& A)const {
    const Fish* fp = dynamic_cast<const Fish*>(&A);
    bool res = false;
    if (fp) res = fp->m_depth == this->m_depth;
    return res;
  }
  Fish::~Fish() {

  }
}