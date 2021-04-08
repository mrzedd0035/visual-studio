#include <iostream>
using namespace std;

class Animal {
 public:
  virtual void Cry() = 0;
};
class Dog : public Animal {
 public:
  void Cry() {
    cout << "멍멍\n";
    return;
  }
};
class Bird : public Animal {
 public:
  void Cry() {
    cout << "짹짹\n";
    return;
  };
};
class Cat : public Animal {
 public:
  void Cry() {
    cout << "야옹\n";
    return;
  }
};

int main() {
  Animal *pa = new Dog;
  Animal *pb = new Bird;
  Animal *pc = new Cat;
  pa->Cry();
  pb->Cry();
  pc->Cry();
  Dog *pd = (Dog *)pa;
  pd->Cry();
  return 0;
}