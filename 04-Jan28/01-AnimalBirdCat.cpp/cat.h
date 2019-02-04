#ifndef SICT_CAT_H__
#define SICT_CAT_H__
#include "animal.h"
namespace sict{
  class Cat:public Animal{
    int m_speed;
  public:
    Cat(int speed);
    void move()const;
    void run() const;
    void sound()const;
    Animal* clone()const;
    bool operator==(const Animal& A)const;
    ~Cat();
  };
}
#endif