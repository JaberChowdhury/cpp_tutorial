# Enums in C++

An enum is a special type that represents a group of `constants (unchangeable values)`.

> **`An enum is a user-defined type`** that allows you to assign names to integer values, making your code more readable.

```cpp
#include <iostream>
using namespace std;

enum Color { RED, GREEN, BLUE };

int main() {
    Color myColor = GREEN;

    if (myColor == GREEN) {
        cout << "The color is GREEN" << endl;
    }

    return 0;
}
```

## **How does it work?**

- `enum Color { RED, GREEN, BLUE };`
  - This defines a new type `Color` with values `RED=0, GREEN=1, BLUE=2`.
- `Color myColor = GREEN;`
  - This creates a variable `myColor` of type `Color` and assigns `GREEN` to it.
- The `if` statement checks if `myColor` is `GREEN` and prints a message.

---

> Note that the last item does not need a comma.It is not required to use uppercase, but often considered as good practice.Enum is short for "enumerations", which means "specifically listed".

> **`[?] Why And When To Use Enums?`** Enums are used to give names to constants, which makes the code easier to read and maintain.Use enums when you have values that you know aren't going to change, like month days, days, colors, deck of cards, etc.

## Real-world Example

```cpp
#include <iostream>
using namespace std;

// Define an enum for Traffic Light
enum TrafficLight { RED, YELLOW, GREEN };

void showSignal(TrafficLight light) {
    switch (light) {
        case RED:
            cout << "STOP! The light is RED." << endl;
            break;
        case YELLOW:
            cout << "GET READY! The light is YELLOW." << endl;
            break;
        case GREEN:
            cout << "GO! The light is GREEN." << endl;
            break;
    }
}

int main() {
    TrafficLight currentLight = RED;

    showSignal(currentLight); // Output: STOP! The light is RED.

    currentLight = GREEN;
    showSignal(currentLight); // Output: GO! The light is GREEN.

    return 0;
}
```
