#include <bits/stdc++.h>
using namespace std;

class Person {
  protected:
    string name;
    int    age;

  public:
    Person(const string& n, int a) {
        this->name = n;
        this->age  = a;
    }
};

class Employee : public Person {
  protected:
    int id;

  public:
    Employee(const string& n, int a, int id)
        : Person(n, a) {
        this->id = id;
    }
};
class Student : public Person {
  protected:
    int roll;

  public:
    Student(const string& n, int a, int roll)
        : Person(n, a) {
        this->roll = roll;
    }
};

class InternStudent : public Employee, public Student {
  protected:
    float salary;

  public:
    InternStudent(const string& n, int a, int roll, int id, int salary)
        : Employee(n, a, id)
        , Student(n, a, roll) {
        this->salary = salary;
    }
};

int main() {
    InternStudent jaber("jaber", 21, 70002, 21231, 2124565);
    return 0;
}