#include <iostream>
using namespace std;

static void run(void);
void moduleOne(void) {
  run();
}

void run(void) {
  cout << "running module one!" << endl;
}