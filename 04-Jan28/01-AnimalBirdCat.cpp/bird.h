#ifndef SICT_BIRD_H__
#define SICT_BIRD_H__
#include "animal.h"
namespace sict{
  class Bird:public Animal{
    int m_altitude; // how high it flys
  public:
    Bird(int altitude);
    void move()const;
    void fly()const;
    void sound()const;
    Animal* clone()const;
    bool operator==(const Animal& A)const;
    ~Bird();
  };
}
#endif