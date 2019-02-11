

template <typename T, size_t N>
class List {








};




class container {
  int i;
public:
  container(int v) {
    i = v;
  }
  int val() {
    return i;
  }
  ostream& show(ostream& os) {
    return os << i;
  }
};

ostream& operator<<(ostream& os, const container& C) {
  return C.show(os);
}
















