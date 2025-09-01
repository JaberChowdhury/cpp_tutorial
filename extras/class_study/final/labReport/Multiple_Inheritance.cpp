#include <iostream>
using namespace std;
class Base_class_one {
  public:
    void print_one() { cout << "Congratualation from class 1" << endl; }
};
class Base_class_two {
  public:
    void print_two() { cout << "Congratualation from class 2" << endl; }
};
class Base_class_three {
  public:
    void print_three() { cout << "Congratualation from class 3" << endl; }
};
class Derived_class : public Base_class_one, public Base_class_two, public Base_class_three {
  public:
    void print() {
        this->print_one();
        this->print_two();
        this->print_three();
        cout << "Congratualation from derived class" << endl;
    }
};
int main() {
    Derived_class d;
    d.print();
    return 0;
}

/*
Multiple inheritance : In this inheritance a derived class can inherit from multiple base class */