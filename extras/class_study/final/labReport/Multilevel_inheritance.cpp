#include <iostream>
using namespace std;

// base class
class Animal {
  public:
    void eat() { cout << "Animal is eating" << endl; }
};
class Mammal : public Animal {
  public:
    void Walk() { cout << "Mammal is walking" << endl; }
};
class Dog : public Mammal {
  public:
    void Bark() { cout << "Dog is barking" << endl; }
};

int main() {
    Dog bob;
    bob.eat();
    bob.Walk();
    bob.Bark();
    return 0;
}

/*
Multilevel inheritance : In multilevel inheritance one derived is inherited from another base class or one other derived
class and that derived can be inherited from another derived class or a base class*/