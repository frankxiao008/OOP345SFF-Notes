#include <iostream>
using namespace std;
int main() {
  auto hello = []() { 
    return "Hello World"; 
  };
  auto add4 = [](int i) { return i + 4; };
  auto sub4 = [](int i) { return i - 4; };


  [](char ch) {
    for (int i = 0; i < 10; i++) cout << ch;
    cout << endl;
  }('@');
  // calls on the lambda expressions
  cout << hello() << endl;
  cout << add4(10) << endl;
  cout << sub4(10) << endl;
  return 0;
}