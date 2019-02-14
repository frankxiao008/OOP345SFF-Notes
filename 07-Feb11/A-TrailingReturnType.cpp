#include <iostream>
using namespace std;
class Door {
public:
  enum class DoorStatus{Closed, Open , Locked};
  void set(DoorStatus ds);
  DoorStatus get() const;
  ostream& displayStatus(ostream& os)const;
private:
  DoorStatus doorStatus;
};

ostream& operator<<(ostream&os, const Door& dr) {
  return dr.displayStatus(os);
}
void Door::set(DoorStatus tt) {
  doorStatus = tt;
}

auto Door::get() const -> DoorStatus {
  return doorStatus;
}

ostream& Door::displayStatus(ostream& os)const {
  const char* status = nullptr;
  switch (get()) {
  case Door::DoorStatus::Closed:
    status = "Closed";
    break;
  case Door::DoorStatus::Open:
    status = "Open";
    break;
  default:
    status = "Locked";
  }
  return os << status;
}

int main() {
  Door a, b, c;
  a.set(Door::DoorStatus::Closed);
  b.set(Door::DoorStatus::Open);
  cout << a << endl;
  cout << b << endl;
  cout << c << endl;
}