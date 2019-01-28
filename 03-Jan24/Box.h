#ifndef SICT_BOX_H__
#define SICT_BOX_H__
#include <iostream>
namespace sict {
  class Box {
    int m_w; // width
    int m_h; // height
    static unsigned int m_num;
  public:
    Box();
    Box(int side);
    Box(int w, int h);
    ~Box();
    bool isEmpty()const;
    void set(int width, int height);
    static int num();
    std::ostream& draw(std::ostream& os=std::cout)const;
  };
  std::ostream& operator<<(std::ostream& os, const Box& B);
  std::ostream& operator<<(std::ostream& os, Box&& B);
}


#endif
