#ifndef SICT_GOLDFISH_H__
#define SICT_GOLDFISH_H__
#include "animal.h"
namespace sict{
  class Fish:public Animal {
    int m_depth;
  public:
    Fish(int depth);
    void move()const;
    void sound()const;
    void swim()const;
    Animal* clone()const;
    bool operator==(const Animal& A)const;
    ~Fish();
  };
}
#endif