#include <iostream>
using namespace std;

void print(Student& S);

int main(){
  int i;
  i = 5;

  int& r = i;
  print(Student(123467));
  return 0;
}