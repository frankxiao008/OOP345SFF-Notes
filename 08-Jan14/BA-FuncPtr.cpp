#include <iostream>
using namespace std;
char printBar(char ch, int length) {
  for (int i = 0; i < length; i++) {
    cout.put(ch);
  }
  cout << endl;
  return ch;
}
char nextChar(char ch, int num) {
  cout << num << " characters after " << ch << " is ";
  if (ch > 'Z' && ch + num <= 'z' || ch < 'Z' && ch + num <= 'Z')
    cout << static_cast<char>(ch + num) << endl;
  else {
    cout << " out of range (goes after Z)." << endl;
  }
  return static_cast<char>(ch + num);
}
char box(char ch, int side) {
  int i;
  int j;
  for (i = 0; i < side; i++) cout << ch << (i == side - 1 ? "" : " ");
  cout << endl;
  for (j = 0; j < side - 2; j++) {
    cout << ch;
    for (i = 0; i < side - 2; i++) cout << "  "; cout << " ";
    cout << ch << endl;
  }
  for (i = 0; i < side; i++)  cout << ch << (i == side - 1 ? "" : " ");
  cout << endl;
  return ch;
}
int main(void) {
  char bch;
  char(*funcPtr)(char, int);
  funcPtr = printBar;
  bch = funcPtr('x', 40);
  cout << bch << endl;
  funcPtr = nextChar;
  bch = funcPtr('a', 3);
  cout << bch << endl;
  funcPtr = box;
  bch = funcPtr('@', 6);
  cout << bch << endl;
  return 0;
}