#include <iostream>
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

class Employee : virtual public Person {
  protected:
    int id;

  public:
    Employee(const string& n, int a, int id)
        : Person(n, a) {
        this->id = id;
    }
};

class Student : virtual public Person {
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
    InternStudent(const string& n, int a, int roll, int id, float salary)
        : Person(n, a)
        , Employee(n, a, id)
        , Student(n, a, roll) {
        this->salary = salary;
    }

    void info() {
        cout << "Name   :: " << name << endl;
        cout << "Age    :: " << age << endl;
        cout << "Roll   :: " << roll << endl;
        cout << "ID     :: " << id << endl;
        cout << "Salary :: " << salary << endl;
    }
};

int main() {
    InternStudent jaber("jaber", 21, 70002, 21231, 4565);
    jaber.info();
    return 0;
}
