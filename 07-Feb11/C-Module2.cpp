#include <iostream>
using namespace std;

static void run(void); // internal linkage, no conflict
// void run(void); external linkage 
void moduleTwo(void) {
  run();
}

void run(void) {
  cout << "running module Two!" << endl;
}