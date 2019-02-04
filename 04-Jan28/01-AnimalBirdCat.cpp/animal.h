#ifndef SICT_ANIMAL_H__
#define SICT_ANIMAL_H__
namespace sict{
#include <iostream>
  class Animal {
  public:
    virtual void move()const = 0;
    virtual void sound()const = 0;
    virtual Animal* clone()const = 0;
    virtual bool operator==(const Animal& A)const=0;
  };
  std::ostream& operator<<
    (std::ostream& OS, const Animal& a);
  std::ostream& operator<<
    (std::ostream& OS, const Animal* ap);
}
#endif