// C++ program to read and print employee information using multiple inheritance.

#include <iostream>
using namespace std;
class Person {
  public:
    string name;
    int    age;
    void   take_person_info() {
        cout << "Name: ";
        cin >> name;
        cout << "Age: ";
        cin >> age;
    }
};
class Address {
  public:
    string location;
    void   take_address_info() {
        cout << "location: ";
        cin >> location;
    }
};
class Employee : public Person, public Address {
  public:
    string id, hobby;
    int    income;

    void take_input() {
        cout << "\nEnter details of patient " << ":\n";
        take_person_info();
        take_address_info();
        cout << "ID: ";
        cin >> id;
        cout << "Hobby : ";
        cin >> hobby;
        cout << "Income : ";
        cin >> income;
    }
    void print_info() {
        cout << "Employees name : " << name << "\n";
        cout << "Employee's id : " << id << "\n";
        cout << "Employee's hobby : " << hobby << "\n";
        cout << "Employee's income : " << income << "\n";
        cout << "Employee's age : " << age << "\n";
    }
};

int main() {
    Employee m, j;
    m.take_input();

    j.take_input();

    cout << "Info \n" << endl;
    m.print_info();
    j.print_info();
    return 0;
}
