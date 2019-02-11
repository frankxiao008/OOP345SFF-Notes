#include <iostream>
using namespace std;
int main(int argc, char* argv[]) {
  int num[5] = { 1, 4, 6, 7, 8 };
  int cnt = 0;
  for (int i = 0; i < 5; i++) {
    (num[i] > 5) && cnt++;
  }
  cout << cnt << " nums greater that 5 " << endl;
  return 0;
}