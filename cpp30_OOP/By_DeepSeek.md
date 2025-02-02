# OOP

---

# OOP Concepts in C++

## 1. Abstraction in C++

Abstraction in C++ is achieved using **abstract classes** and **interfaces** (via pure virtual functions). It hides the implementation details and exposes only the necessary features.

### Example:

```cpp
#include <iostream>
using namespace std;

// Abstract class
class Shape {
public:
    // Pure virtual function (makes Shape abstract)
    virtual void draw() = 0; // No implementation
};

// Concrete class
class Circle : public Shape {
public:
    void draw() override {
        cout << "Drawing a Circle" << endl;
    }
};

int main() {
    Shape* shape = new Circle(); // Abstraction in action
    shape->draw();               // Calls Circle's draw()
    delete shape;
    return 0;
}
```

**Explanation**:

- `Shape` is an abstract class with a pure virtual function `draw()`.
- `Circle` provides a concrete implementation of `draw()`.
- The user interacts with the `Shape` interface without knowing the details of `Circle`.

---

## 2. Encapsulation in C++

Encapsulation is achieved by using **access specifiers** (`private`, `protected`, `public`) to control access to data members and methods.

### Example:

```cpp
#include <iostream>
using namespace std;

class BankAccount {
private:
    double balance; // Encapsulated data

public:
    // Public methods to interact with private data
    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
        }
    }

    void withdraw(double amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
        }
    }

    double getBalance() const {
        return balance;
    }
};

int main() {
    BankAccount account;
    account.deposit(1000);
    account.withdraw(500);
    cout << "Balance: " << account.getBalance() << endl; // Output: Balance: 500
    return 0;
}
```

**Explanation**:

- The `balance` is private and cannot be accessed directly.
- Public methods (`deposit`, `withdraw`, `getBalance`) provide controlled access to the `balance`.

---

## 3. Inheritance in C++

Inheritance allows a class to derive properties and behaviors from another class. In C++, this is done using the `:` symbol.

### Example:

```cpp
#include <iostream>
using namespace std;

// Base class
class Vehicle {
public:
    void start() {
        cout << "Vehicle started" << endl;
    }
};

// Derived class
class Car : public Vehicle {
public:
    void drive() {
        cout << "Car is driving" << endl;
    }
};

int main() {
    Car car;
    car.start(); // Inherited from Vehicle
    car.drive(); // Specific to Car
    return 0;
}
```

**Explanation**:

- `Car` inherits from `Vehicle` and can use its `start()` method.
- `Car` adds its own method `drive()`.

---

## 4. Polymorphism in C++

Polymorphism allows objects of different classes to be treated as objects of a common base class. In C++, this is achieved using **function overriding** and **virtual functions**.

### Example:

```cpp
#include <iostream>
using namespace std;

// Base class
class Animal {
public:
    // Virtual function
    virtual void speak() {
        cout << "Animal speaks" << endl;
    }
};

// Derived class
class Dog : public Animal {
public:
    // Override the base class method
    void speak() override {
        cout << "Dog barks" << endl;
    }
};

// Derived class
class Cat : public Animal {
public:
    // Override the base class method
    void speak() override {
        cout << "Cat meows" << endl;
    }
};

int main() {
    Animal* animal1 = new Dog(); // Polymorphism
    Animal* animal2 = new Cat(); // Polymorphism

    animal1->speak(); // Output: Dog barks
    animal2->speak(); // Output: Cat meows

    delete animal1;
    delete animal2;
    return 0;
}
```

**Explanation**:

- The `Animal` class has a virtual function `speak()`.
- `Dog` and `Cat` override the `speak()` method.
- At runtime, the correct `speak()` method is called based on the actual object type.

---

## Summary of OOP Concepts in C++

| Concept           | Description                                                   | Example in C++                                                  |
| ----------------- | ------------------------------------------------------------- | --------------------------------------------------------------- |
| **Abstraction**   | Hides complexity, shows only essential features.              | Abstract classes and pure virtual functions.                    |
| **Encapsulation** | Bundles data and methods, restricts access.                   | Private data members with public getter/setter methods.         |
| **Inheritance**   | A class inherits properties and behaviors from another class. | Use `:` to derive a class (e.g., `class Car : public Vehicle`). |
| **Polymorphism**  | One interface, multiple implementations.                      | Virtual functions and function overriding.                      |

These concepts are fundamental to writing clean, modular, and reusable C++ code!

---

This Markdown is now properly formatted and easy to read. Let me know if you need further adjustments!
