#include <iostream>
#include <string>
using namespace std;
class Car {
  const string model;
  bool power;
  double speed;

 public:
  Car( string m, bool p = false, double s = 0.0)
      : model(m), power(p), speed(s){};
  void set_power();
  void set_speed(bool);
  double get_speed() const;
};
void Car::set_power() {
  power = !power;
  return;
}
void Car::set_speed(bool a) {
  if (!power) return;
  if (a)
    speed += 0.1;
  else
    speed -= 0.1;
  return;
}
double Car::get_speed() const { return speed; }
int main() {
  Car car1("소나타");
  car1.set_power();
  car1.set_speed(true);
  cout << car1.get_speed() << endl;
  return 0;

  Car car2("그렌저");
  car2.set_power();
  car2.set_speed(true);
  cout << car2.get_speed() << endl;
  return 0;

  Car car3("아반떼");
  car3.set_power();
  car3.set_speed(true);
  cout << car3.get_speed() << endl;
  return 0;

  Car car4("아이오닉");
  car4.set_power();
  car4.set_speed(true);
  cout << car4.get_speed() << endl;
  return 0;
}