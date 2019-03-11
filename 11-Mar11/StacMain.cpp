#include <iostream>
using namespace std;
#include "Stack.h"


int main(){
  
  Stack<int> S;
  Stack<double> T;
  S.push(10);
  S.push(5);
  S.push(30);
  cout << "depth: " << S.depth() << endl;
  while (!S.isEmpty()) {
    cout << S.pop() << endl;
  }
  T.push(10.123);
  T.push(5.1233);
  T.push(30.567);
  cout << "depth: " << T.depth() << endl;
  while (!T.isEmpty()) {
    cout << T.pop() << endl;
  }
  return 0;
}