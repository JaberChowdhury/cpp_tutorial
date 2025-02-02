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
