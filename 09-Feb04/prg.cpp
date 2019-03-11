struct Foo {
  char a;
  char filler[3];
  int b;
  char c;
  char filler2[7];
  double d;
};


typedef struct {
  char frist[40];
  char last[60];
} Name;

/*struct Name_S{
  char frist[40];
  char last[60];
} ;

typedef struct Name_S Name; */

class A {
public:
  A(int a);
};

foo(A& a);
foo(A&& b);r



template <typename T = int, int size = 50>
class Array {
  T a[size];
  unsigned n;
  T dummy;
  static unsigned count;
public:a
  Array() : n{ 0 }, dummy{ 0 } { ++count; }
  T& operator[](unsigned i) {
    return i < 50u ? a[i] : dummy;
  }
  static unsigned cnt() { return count; }
  ~Array() { --count; }
  Array<T>* clone();
};
template <typename T = int, int size = 50>
Array<T>* Array<T>::clone() {

}
template <typename T = int, int size = 50>
unsigned Array<T>::count = 0u;



int main() {

   Name N;
   Name*  p = 0;
   p++;

   A aaa(10);

   foo(aaa);
   foo(A(20));
   


}