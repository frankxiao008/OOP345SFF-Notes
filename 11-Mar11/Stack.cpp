#include "Stack.h"

size_t Node::m_count = 0;
size_t Node::count() {
  return m_count;
}
Node::Node(int data, Node *next ){
  this->m_data = data;
  this->m_next = next;
  m_count++;
}
Node::~Node() {
  m_count--;
}
Stack::~Stack(){
  while (!isEmpty()) pop();
}
void Stack::push(int data){
  top = new Node(data, top);
}
int Stack::pop(){
  int val;
  if(!isEmpty()){
    Node *ToBeDeleted = top;
    val = top->m_data;
    top = top->m_next;
    delete ToBeDeleted;
  }
  return val;
}
bool Stack::isEmpty()const{
  return top == nullptr;
}
size_t Stack::depth()const {
  return Node::count();
}
