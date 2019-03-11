#ifndef SICT_STACK_H__
#define SICT_STACK_H__
template <typename T>
class Stack;

template <typename T>
class Node{
  private:
  T m_data;
  Node<T> *m_next = nullptr;
  Node(T data, Node<T> *next = nullptr);
  ~Node();
  static size_t m_count;
  static size_t count();
  friend Stack<T>;
};

template <typename T>
class Stack{
  Node<T> *top = nullptr;
public:
  void push(T data); // pushes an integer into the stack
  T pop();           // pops an integer out of the stack
  size_t depth()const;  // returns the number of nodes in the stack
  bool isEmpty() const;
  ~Stack();
};

template <typename T>
size_t Node<T>::m_count = 0;



template <typename T>
size_t Node<T>::count() {
  return m_count;
}
template <typename T>
Node<T>::Node(T data, Node<T> *next) {
  this->m_data = data;
  this->m_next = next;
  m_count++;
}
template <typename T>
Node<T>::~Node() {
  m_count--;
}
template <typename T>
Stack<T>::~Stack() {
  while (!isEmpty()) pop();
}
template <typename T>
void Stack<T>::push(T data) {
  top = new Node<T>(data, top);
}
template <typename T>
T Stack<T>::pop() {
  T val;
  if (!isEmpty()) {
    Node<T> *ToBeDeleted = top;
    val = top->m_data;
    top = top->m_next;
    delete ToBeDeleted;
  }
  return val;
}
template <typename T>
bool Stack<T>::isEmpty()const {
  return top == nullptr;
}
template <typename T>
size_t Stack<T>::depth()const {
  return Node<T>::count();
}


#endif