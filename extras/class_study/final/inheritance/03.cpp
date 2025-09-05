// Write a C++ Program display Student Marksheet using Multiple inheritance.
#include <iostream>
using namespace std;

class Person {
  public:
    string name;
    void   take_person_info() {
        cout << "Please enter your name :: ";
        cin >> name;
    }
};

class Subject {
  public:
    int  edc;
    int  government;
    int  physics;
    int  oop;
    void take_sub_info() {
        cout << "edc : ";
        cin >> edc;
        cout << "government : ";
        cin >> government;
        cout << "physics : ";
        cin >> physics;
        cout << "oop : ";
        cin >> oop;
    }
};
class Student : public Person, public Subject {
  public:
    int  gpa;
    void take_input() {
        take_person_info();
        take_sub_info();
        cout << "gpa : ";
        cin >> gpa;
    }
    void display() {
        cout << "Info" << endl;
        cout << "Name :: " << name << endl;
        cout << "edc :: " << edc << endl;
        cout << "physics :: " << physics << endl;
        cout << "government :: " << government << endl;
        cout << "oop :: " << oop << endl;
        cout << "gpa :: " << gpa << endl;
    }
};
int main() {
    Student ratul, mekdam;
    ratul.take_input();
    mekdam.take_input();

    ratul.display();
    mekdam.display();
    return 0;
}
