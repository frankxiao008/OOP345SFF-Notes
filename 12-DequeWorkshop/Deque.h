// convert the Deque class to a template to work with any type
// after done test you work and make sure it works with differenct types.
// When completed move your template file (Deque.h) and your tester to 
// matrix and make sure it works properly 
// To submit your workshop run the following command
// ~fardad.soleimanloo/submit 345_tw<ENTER>

#ifndef SICT_QUEUE_H__
#define SICT_QUEUE_H__

class Deque;
class Qnode {
  double m_data;
  Qnode* m_next;
  Qnode* m_prev;
  Qnode(const double& data={}, Qnode* prev = nullptr, Qnode* next = nullptr);
  friend class Deque;
};
class Deque {
  Qnode* m_head = nullptr;
  Qnode* m_tail = nullptr;
  size_t m_size = 0;
  static size_t m_serial;
public:
  Deque();
  Deque(size_t size);
  Deque(size_t size, const double& data);
  Deque(const Deque& Q);
  Deque(Deque&& Q);
  ~Deque();
  Deque& operator=(const Deque& Q);
  Deque& operator=(Deque&& Q);
  size_t size()const;
  bool empty()const;
  double& operator[](size_t index);
  const double& operator[](size_t index)const;
  double& front();
  const double& front()const;
  double& back();
  const double& back()const;
  void push_back(const double& data); 
  void push_front(const double& data);
  void pop_back();
  void pop_front();
  void clear();
  static size_t serial();
};



#endif
