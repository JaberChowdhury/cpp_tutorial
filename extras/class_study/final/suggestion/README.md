# 1. Features of OOP.

> Object Oriented Programming (OOP) is a style of programming that uses objects to model real-world things like data and behavior. It focuses on key ideas like inheritance, encapsulation, and polymorphism. The main goal of OOP is to group data and the functions that work on it together, so that the data is protected and can only be changed in controlled ways.

> In C++, the basic building block of Object-Oriented Programming is the class. A class is a user-defined type that acts like a blueprint to create objects that share similar properties (data) and behaviors (functions).

### 1. Inheritance

> The capability of a class to derive properties and characteristics from another class is called Inheritance. Inheritance is one of the most important features of Object-Oriented Programming in C++. Where derived class inherit one or multiple base class.

### 2. Abstraction

> Data abstraction is one of the most essential and important features of object-oriented programming in C++. Abstraction means displaying only essential information about the data and ignoring the internal details or implementation.

### 3. Encapsulation

> Encapsulation means combining data and the functions that work on that data into a single unit, like a class. In Object-Oriented Programming, it helps keep things organized and secure.

```cpp
class Person {
public:

    // Data/information
    int socialID;
    string name;

    // Functions that work in this data
    Person(string n, int id) {}
    bool validateID() {}
};
```

### 4. Polymorphism

> The word polymorphism means having many forms.In C++, polymorphism concept can be applied to functions and operators. A single function can work differently in different situations. Similarly, an operator works different when used in different context. Polymorphism in C++ can be classified into two types: i> `Compile-time Polymorphism` ii> `Runtime Polymorphism`

```cpp
#include <bits/stdc++.h>
using namespace std;

class Geeks {
public:

    // Function to add two integers
    void add(int a, int b) {
        cout << "Integer Sum = " << a + b
        << endl;
    }

    // Function to add two floating point values
    void add(double a, double b) {
        cout << "Float Sum = " << a + b
        << endl ;
    }
};

int main() {
    Geeks gfg;

    // add() called with int values
    gfg.add(10, 2);

    // add() called with double value
    gfg.add(5.3, 6.2);

    return 0;
}
```

# 2. Define Class and Object with real Life Example.

> In Object Oriented Programming, classes and objects are basic concepts of that are used to represent real-world concepts and entities.A class is a template to create objects having similar properties and behavior, or in other words, we can say that a class is a blueprint for objects. An object is an instance of a class. For example, the animal type Dog is a class, while a particular dog named Tommy is an object of the Dog class.

> A class is a user-defined data type, which holds its own data members and member functions that can be accessed and used by creating an instance of that class.

> When a class is defined, only the specification (attributes and behaviour) for the object is defined. No memory is allocated to the class definition. To use the data and access functions defined in the class, we need to create its objects.Objects are the actual entities that are created as an instance of a class.

```cpp
#include <iostream>
using namespace std;

// Class definition
class Item {
public:
    // Data member
    int price;

    // Member function
    void show() {
        cout << "price: " << price << endl;
    }
};

int main() {
    // object created from Item class
    Item cup;

    return 0;
}
```

# 3. Define Constructor and Destructor.

### **Constructor**

> A constructor is a member function of a class that has the same name as the class name. It helps to initialize the object of a class. It can either accept the arguments or not. It is used to allocate the memory to an object of the class. It is called whenever an instance of the class is created.

### **Destructor**

> Like a constructor, Destructor is also a member function of a class that has the same name as the class name preceded by a tilde(~) operator. It helps to deallocate the memory of an object. It is called while the object of the class is freed or deleted.

```cpp
#include <iostream>
using namespace std;

class Z
{
public:
    // constructor
    Z()
    {
        cout<<"Constructor called"<<endl;
    }

    // destructor
    ~Z()
    {
        cout<<"Destructor called"<<endl;
    }
};

int main()
{
    Z z1;   // Constructor Called
    int a = 1;
    if(a==1)
    {
        Z z2;  // Constructor Called
    }  // Destructor Called for z2
} //  Destructor called for z1
```

# 4. Define Friend Function and Copy Constructor.

### **Friend Function**

> A friend function in C++ is a non-member function that is granted special permission to access the private and protected members of a class. It is declared inside the class using the friend keyword, but its definition resides outside the class. This allows the friend function to manipulate the internal state of objects of that class, even though it is not a part of the class's public interface.

```cpp
#include <iostream>
using namespace std;

class Employee {
  private:
    int salary;

  public:
    Employee(int s) {
      salary = s;
    }

    // Declare friend function
    friend void displaySalary(Employee emp);
};

void displaySalary(Employee emp) {
  cout << "Salary: " << emp.salary;
}

int main() {
  Employee myEmp(50000);
  displaySalary(myEmp);
  return 0;
}
```

### **Copy Constructor**

> A copy constructor is a type of constructor that creates an object using another object of the same class. The process of initializing members of an object through a copy constructor is known as copy initialization. It is also called member-wise initialization because the copy constructor initializes one object with the existing object, both belonging to the same class on a member-by-member copy basis.

```cpp
#include <iostream>
using namespace std;

class Student {
    int id;
    string name;

public:
    // Normal constructor
    Student(int i, string n) {
        id = i;
        name = n;
        cout << "Normal constructor called!" << endl;
    }

    // Copy constructor
    Student(const Student &s) {
        id = s.id;
        name = s.name;
        cout << "Copy constructor called!" << endl;
    }

    void display() {
        cout << "ID: " << id << ", Name: " << name << endl;
    }
};

int main() {
    Student s1(101, "Jaber");  // normal constructor called
    Student s2 = s1;           // copy constructor called

    s1.display();
    s2.display();

    return 0;
}
```

# 5. Inheritance (Read in details)

> - **I. Single Inheritance**
>   > In single inheritance, a class is allowed to inherit from only one class. i.e. one base class is inherited by one derived class only.

```cpp
#include <iostream>
using namespace std;

class Vehicle {
public:
  void startEngine() {
    cout << "Engine started." << endl;
  }
};

class Car : public Vehicle {
public:
  void drive() {
    cout << "Car is driving." << endl;
  }
};

int main() {
  Car myCar;

  myCar.startEngine(); // Inherited from Vehicle
  myCar.drive(); // Car's own method

  return 0;
}
```

> - **II. Multiple Inheritance**
>   > Multiple Inheritance is a feature of C++ where a class can inherit from more than one class. i.e one subclass is inherited from more than one base class.

```cpp
#include<iostream>
using namespace std;
class Person {
   // Data members of person
public:
    Person(int x)  { cout << "Person::Person(int ) called" << endl;   }
};

class Faculty : public Person {
   // data members of Faculty
public:
    Faculty(int x):Person(x)   {
       cout<<"Faculty::Faculty(int ) called"<< endl;
    }
};

class Student : public Person {
   // data members of Student
public:
    Student(int x):Person(x) {
        cout<<"Student::Student(int ) called"<< endl;
    }
};

class TA : public Faculty, public Student  {
public:
    TA(int x):Student(x), Faculty(x)   {
        cout<<"TA::TA(int ) called"<< endl;
    }
};

int main()  {
    TA ta1(30);
}
```

> - **III. Multilevel inheritance**
>   > In multilevel inheritance, a derived class is created from another derived class and that derived class can be derived from a base class or any other derived class.There can be any number of levels.

```cpp
#include <bits/stdc++.h>
using namespace std;

class Grandfather {
public:
    void g() {
        cout << "This is a Grandfather class" << endl;
    }

};

class Father : public Grandfather {
public:
    void f() {
        cout << "This is Father class" << endl;
    }
};

class Child : public Father {
public:
    void c() {
        cout << "This is Son class" << endl;
    }
};

int main() {

    // Creating object of Child class
    Child obj;

    // Calling member methods of all classes
    // using Child object
    obj.c();
    obj.Father::f();
    obj.Father::Grandfather::g();
    return 0;
}
```

> - **IV. Hierarchical Inheritance**
>   > In hierarchical inheritance, more than one subclass is inherited from a single base class. i.e. more than one derived class is created from a single base class.

```cpp
// C++ program for Hierarchical Inheritance
#include<iostream>
using namespace std;

class A   //superclass A
{
  public:
  void show_A() {
    cout<<"class A"<<endl;
  }
};
class B : public A   //subclass B
{
  public:
  void show_B() {
    cout<<"class B"<<endl;
  }
};

class C : public A   //subclass C
{
  public:
  void show_C() {
    cout<<"class C"<<endl;
  }
};

int main() {
  B b;  // b is object of class B
  cout<<"calling from B: "<<endl;
  b.show_B();
  b.show_A();

  C c;  // c is object of class C
  cout<<"calling from C: "<<endl;
  c.show_C();
  c.show_A();
  return 0;
}
```

> - **V. Hybrid inheritance**
>   > Hybrid Inheritance is implemented by combining more than one type of inheritance. For example: Combining Hierarchical inheritance and Multiple Inheritance will create hybrid inheritance in C++.

```cpp
#include <iostream>
using namespace std;

// Base class
class Person {
protected:
    string name;
public:
    Person(string n) : name(n) {}
    void showName() { cout << "Name: " << name << endl; }
};

// Derived from Person
class Employee : public Person {
protected:
    int empId;
public:
    Employee(string n, int id) : Person(n), empId(id) {}
    void showEmployee() {
        showName();
        cout << "Employee ID: " << empId << endl;
    }
};

// Derived from Person
class Student : public Person {
protected:
    int stuId;
public:
    Student(string n, int id) : Person(n), stuId(id) {}
    void showStudent() {
        showName();
        cout << "Student ID: " << stuId << endl;
    }
};

// Hybrid Inheritance: Employee + Student
class StudentIntern : public Employee, public Student {
public:
    StudentIntern(string n, int eid, int sid)
        : Employee(n, eid), Student(n, sid) {}

    void showIntern() {
        cout << "\n--- Student Intern Info ---\n";
        Employee::showEmployee(); // resolve ambiguity
        Student::showStudent();
    }
};

// Driver code
int main() {
    StudentIntern s("Riya", 101, 202);
    s.showIntern();
    return 0;
}
```

# 6. Polymorphism

Got it 👍 Let me complete your polymorphism note fully in **English only**.

---

# 6. Polymorphism

**Polymorphism** means "many forms."
A person can be a **father, husband, and employee** at the same time. The same person behaves differently in different situations. This concept is called **polymorphism**.

---

## **Types of Polymorphism (2 types)**

### **1. Compile-time Polymorphism**

- Also called **early binding** or **static polymorphism**.
- The compiler decides which function or operator to call at compile time.
- Achieved by **function overloading** and **operator overloading**.

**Function Overloading:**

```cpp
#include <iostream>
using namespace std;

class Print {
public:
    void show(int x) {
        cout << "Integer: " << x << endl;
    }
    void show(double y) {
        cout << "Double: " << y << endl;
    }
};

int main() {
    Print obj;
    obj.show(10);     // calls show(int)
    obj.show(5.5);    // calls show(double)
    return 0;
}
```

---

### **2. Runtime Polymorphism**

- Also called **late binding** or **dynamic polymorphism**.
- The function call is resolved at **runtime**, not compile time.
- Achieved by **function overriding** using **virtual functions** in inheritance.

**Example (Runtime Polymorphism using Virtual Function):**

```cpp
#include <iostream>
using namespace std;

class Animal {
public:
    virtual void sound() {   // virtual function
        cout << "Animal makes a sound" << endl;
    }
};

class Dog : public Animal {
public:
    void sound() override {  // overriding
        cout << "Dog barks" << endl;
    }
};

class Cat : public Animal {
public:
    void sound() override {
        cout << "Cat meows" << endl;
    }
};

int main() {
    Animal* a;   // base class pointer

    Dog d;
    Cat c;

    a = &d;
    a->sound();   // Output: Dog barks

    a = &c;
    a->sound();   // Output: Cat meows

    return 0;
}
```

# 7. Explain Encapsulation with real life example.

> Encapsulation means combining data and the functions that work on that data into a single unit, like a class. In Object-Oriented Programming, it helps keep things organized and secure.

```cpp
#include <iostream>
#include <string>
using namespace std;

// Class that represents a person
class Person {

    // private members that will be hidden
    int socialID;
    string name;

public:
    // Constructor using initialization list
    Person(string n, int id) : name(n), socialID(id) {}

    // Getter for name (const as it doesn't modify the object)
    string getName() const {
        return name;
    }

    // Optional setter for name
    void setName(string newName) {
        name = newName;
    }

    // Validates the socialID
    bool validateID() const {
        return (socialID >= 0 && socialID <= 1001);
    }
};

int main() {
    Person p1("Geek", 503);

    if (!p1.validateID())
        cout << "Invalid SocialID\n";

    cout << "Name: " << p1.getName() << endl;

    return 0;
}
```

# 8. Explain the term Abstraction in OOP.

> Data abstraction is one of the most essential and important features of object-oriented programming in C++. Abstraction means displaying only essential information about the data and ignoring the internal details or implementation.Consider a real-life example of a man driving a car. The man only knows that pressing the accelerator will increase the speed of the car or applying brakes will stop the car but he does not know how on pressing the accelerator the speed is actually increasing, he does not know about the inner mechanism of the car or the implementation of the accelerator, brakes, etc in the car.

```cpp
#include <iostream>
using namespace std;

// Abstract class
class Vehicle {
public:
    // Pure virtual function (no implementation)
    virtual void start() = 0;

    // Another pure virtual function
    virtual void stop() = 0;
};

// Derived class
class Car : public Vehicle {
public:
    void start() override {
        cout << "Car started" << endl;
    }

    void stop() override {
        cout << "Car stopped" << endl;
    }
};

// Another derived class
class Bike : public Vehicle {
public:
    void start() override {
        cout << "Bike started" << endl;
    }

    void stop() override {
        cout << "Bike stopped" << endl;
    }
};

int main() {
    Vehicle* v1 = new Car();
    Vehicle* v2 = new Bike();

    v1->start(); // Car started
    v1->stop();  // Car stopped

    v2->start(); // Bike started
    v2->stop();  // Bike stopped

    delete v1;
    delete v2;

    return 0;
}
```

# 9. STL

> - I. Vector

```cpp
#include <iostream>
#include <vector>
using namespace std;

int main() {
  // Create a vector called cars that will store strings
  vector<string> cars = {"Volvo", "BMW", "Ford", "Mazda"};

  // Print vector elements
  for (string car : cars) {
    cout << car << "\n";
  }
  return 0;
}
```

> - II. List

```cpp
#include <iostream>
#include <list>
using namespace std;

int main() {
  // Create a list called cars that will store strings
  list<string> cars = {"Volvo", "BMW", "Ford", "Mazda"};

  // Print list elements
  for (string car : cars) {
    cout << car << "\n";
  }
  return 0;
}
```

> - III. Set

```cpp
#include <iostream>
#include <set>
using namespace std;

int main() {
  // Create a set called numbers that will store integers
  set<int> numbers = {1, 7, 3, 2, 5, 9};

  // Print set elements
  for (int num : numbers) {
    cout << num << "\n";
  }
  return 0;
}
```

> - IV. Map

```cpp
#include <iostream>
#include <map>
using namespace std;

int main() {
  // Create a map that will store the name and age of different people
  map<string, int> people = { {"John", 32}, {"Adele", 45}, {"Bo", 29} };

  // Get the value associated with the key "Adele"
  cout << "Adele is: " << people.at("Adele") << "\n";

  // Get the value associated with the key "Bo"
  cout << "Bo is: " << people.at("Bo") << "\n";

  return 0;
}
```

> - V. Stack

```cpp
#include <iostream>
#include <stack>
using namespace std;

int main() {
  // Create a stack of strings called cars
  stack<string> cars;

  // Add elements to the stack
  cars.push("Volvo");
  cars.push("BMW");
  cars.push("Ford");
  cars.push("Mazda");

  // Remove the last/latest added element (Mazda)
  cars.pop();

  // Access the top element (Now Ford)
  cout << cars.top();
  return 0;
}
```

```cpp
#include <iostream>
#include <stack>
using namespace std;

int main() {
  // Create a stack of strings called cars
  stack<string> cars;

  // Add elements to the stack
  cars.push("Volvo");
  cars.push("BMW");
  cars.push("Ford");
  cars.push("Mazda");

  // Remove the last/latest added element (Mazda)
  cars.pop();

  // Access the top element (Now Ford)
  cout << cars.top();
  return 0;
}
```

> - VI. Queue

```cpp
#include <iostream>
#include <queue>
using namespace std;

int main() {
  // Create a queue of strings
  queue<string> cars;

  // Add elements to the queue
  cars.push("Volvo");
  cars.push("BMW");
  cars.push("Ford");
  cars.push("Mazda");

  // Access the front element (first and oldest)
  cout << cars.front() << "\n";

  // Access the back element (last and newest)
  cout << cars.back() << "\n";
  return 0;
}
```

| Method / Container | vector | list | queue | stack | set | map | Description                               | Example Code                                                   |
| ------------------ | ------ | ---- | ----- | ----- | --- | --- | ----------------------------------------- | -------------------------------------------------------------- |
| `[]`, `at()`       | ✔     | ❌   | ❌    | ❌    | ❌  | ✔  | Access element at a specific index or key | `v[0]; v.at(1); m["key"];`                                     |
| `push_back()`      | ✔     | ✔   | ❌    | ❌    | ❌  | ❌  | Add element to the **end**                | `v.push_back(10); l.push_back(20);`                            |
| `push_front()`     | ❌     | ✔   | ❌    | ❌    | ❌  | ❌  | Add element to the **front**              | `l.push_front(5);`                                             |
| `push()`           | ❌     | ❌   | ✔    | ✔    | ❌  | ❌  | Add element (queue: back, stack: top)     | `q.push(30); s.push(40);`                                      |
| `insert()`         | ✔     | ✔   | ❌    | ❌    | ✔  | ✔  | Insert element at position or key         | `v.insert(v.begin()+1,5); st.insert(10); m.insert({1,100});`   |
| `pop_back()`       | ✔     | ✔   | ❌    | ❌    | ❌  | ❌  | Remove the **last element**               | `v.pop_back(); l.pop_back();`                                  |
| `pop_front()`      | ❌     | ✔   | ❌    | ❌    | ❌  | ❌  | Remove the **first element**              | `l.pop_front();`                                               |
| `pop()`            | ❌     | ❌   | ✔    | ✔    | ❌  | ❌  | Remove element (queue: front, stack: top) | `q.pop(); s.pop();`                                            |
| `erase()`          | ✔     | ✔   | ❌    | ❌    | ✔  | ✔  | Remove element at position or key         | `v.erase(v.begin()+1); l.erase(it); st.erase(10); m.erase(1);` |
| `remove()`         | ❌     | ✔   | ❌    | ❌    | ❌  | ❌  | Remove all elements equal to a value      | `l.remove(2);`                                                 |
| `clear()`          | ✔     | ✔   | ❌    | ❌    | ✔  | ✔  | Remove **all elements**                   | `v.clear(); l.clear(); st.clear(); m.clear();`                 |
| `front()`          | ✔     | ✔   | ✔    | ❌    | ❌  | ❌  | Access the **first element**              | `v.front(); l.front(); q.front();`                             |
| `back()`           | ✔     | ✔   | ✔    | ❌    | ❌  | ❌  | Access the **last element**               | `v.back(); l.back(); q.back();`                                |
| `top()`            | ❌     | ❌   | ❌    | ✔    | ❌  | ❌  | Access the **top element** of the stack   | `s.top();`                                                     |
| `begin()/end()`    | ✔     | ✔   | ❌    | ❌    | ✔  | ✔  | Get **iterators** to start and end        | `for(auto it=v.begin(); it!=v.end(); ++it) {}`                 |
| `size()`           | ✔     | ✔   | ✔    | ✔    | ✔  | ✔  | Return number of elements                 | `v.size(); l.size(); q.size(); st.size(); m.size();`           |
| `empty()`          | ✔     | ✔   | ✔    | ✔    | ✔  | ✔  | Check if container has **no elements**    | `v.empty(); l.empty(); q.empty(); st.empty(); m.empty();`      |

### Structure Types:

- **queue → FIFO**
- **stack → LIFO**
- **vector → Dynamic Array**
- **list → Doubly Linked List**
- **set → Balanced BST (sorted unique keys)**
- **map → Balanced BST (sorted key–value pairs)**
