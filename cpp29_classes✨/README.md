# C++ OOP

OOP stands for Object-Oriented Programming._`Procedural programming is about writing procedures or functions that perform operations on the data, while object-oriented programming is about creating objects that contain both data and functions.`_

## Object-oriented programming has several advantages over procedural programming:

- OOP is faster and easier to execute
- OOP provides a clear structure for the programs
- OOP helps to keep the C++ code DRY "Don't Repeat Yourself", and makes the code easier to maintain, modify and debug
- OOP makes it possible to create full reusable applications with less code and shorter development time

> a class is a template for objects, and an object is an instance of a class.

## Classes and Objects

C++ is an object-oriented programming language.

```cpp

#include <iostream>
using namespace std;

class Car
{
public:
    string name;
    int price;
};

int main()
{
    Car tesla;
    tesla.name = "Tesla";
    tesla.price = 500;
    cout << tesla.name << endl;
    cout << tesla.price << endl;
    return 0;
}
```

## C++ Class Methods

There are two ways to define functions that belongs to a class:

- Inside class definition
- Outside class definition

```cpp
#include <iostream>
using namespace std;

class Human
{
public:
    // Inside class definition
    void run()
    {
        cout << "Running\n";
    }
    void walk();
};

// Outside class definition
void Human::walk()
{
    cout << "walking\n";
}

int main()
{
    Human Its_me;
    Its_me.run();
    Its_me.walk();
    return 0;
}
```

## Access Specifiers

In C++, there are three access specifiers:

- _`public`_ - members are accessible from outside the class
- _`private`_ - members cannot be accessed (or viewed) from outside the class
- _`protected`_ - members cannot be accessed from outside the class, however, they can be accessed in inherited classes. You will learn more about Inheritance later.

> By default, all members of a class are private if you don't specify an access specifier:
