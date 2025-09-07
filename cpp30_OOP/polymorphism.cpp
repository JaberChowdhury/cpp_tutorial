#include <iostream>
using namespace std;

/*
 * polymorphism = having many form
 * 2 types of polymorphism
 * i. compile time polymorphism {early binding or static polymorphism}
 * >> i. function overloading
 * >> ii. operator overloading
 * ii. run time polymorphism {late binding or dynamic polymorphism}
 * >> i. function overriding
 */

class Calculator {
  public:
    // function overloading
    // int          add(int x, int y) { return x + y; }
    // float        add(float x, float y) { return x + y; }
    // double       add(double x, double y) { return x + y; }
    virtual void print() { cout << "Hello there" << endl; }
};

class Calculator_v2 : public Calculator {
  public:
    void print() override { cout << "Hey hi there" << endl; }
};

int main() {
    Calculator* c;

    Calculator_v2 c2;

    c = &c2;
    c->print();
    c->print();
    c->print();
    return 0;
}
