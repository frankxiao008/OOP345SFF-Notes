#include <iostream>
#include "Box.h"
using namespace std;
namespace sict {
  unsigned int Box::m_num = 0;
  Box::Box() :Box(0) {}
  Box::Box(int side):Box(side, side) {}
  Box::Box(int w, int h) {
    set(w, h);
    m_num++;
  }
  void Box::set(int width, int height) {
    if (width > 0 && width < 70)
      m_w = width;
    else
      m_w = 10;
    if (height > 0 && height < 20)
      m_h = height;
    else
      m_h = 10;
  }
  ostream& Box::draw(ostream& os)const {
    int i;
    int j;
    if (isEmpty()) {
      os << "Box is not set!" << endl;
    }
    else {
      for (i = 0; i < m_w; i++) os << (i==m_w-1?"*":"* ") ;
      os << endl;
      for (j = 0; j < m_h - 2; j++) {
        cout << '*';
        for (i = 0; i < m_w - 2; i++) os << "  "; os << " ";
        os << '*' << endl;
      }
      for (i = 0; i < m_w; i++)  os << (i == m_w - 1 ? "*" : "* ");
    }
    return os;
  }
  bool Box::isEmpty()const {
    return m_w == 0 || m_h == 0;
  }
  Box::~Box() {
    m_num--;
    //cout << m_w << "x" << m_h << " is gone!" << endl;
  }
  ostream& operator<<(ostream& os, const Box& B) {
    return B.draw(os);
  }
  ostream& operator<<(ostream& os, Box&& B) {
    return B.draw(os);
  }
  int Box::num() {
    return m_num;
  }
}