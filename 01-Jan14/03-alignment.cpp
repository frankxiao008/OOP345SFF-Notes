#include <iostream>
using namespace std;
struct foo {
  double i;
  char ch[5];
  int k;
  double j;
};
int main(){
  cout << sizeof(foo) << endl;
  return 0;
}