# Variable Scope

In C++, variables are only accessible inside the region they are created. This is called scope.

```cpp
#include <iostream>
using namespace std;

void myFunction() {
  // Local variable that belongs to myFunction
  int x = 5;

  // Print the variable x
  cout << x;
}

int main() {
  myFunction();
  return 0;
}
```

## Global scope

```cpp
#include <iostream>
using namespace std;

// Global variable x
int x = 5;

void myFunction() {
  // We can use x here
  cout << x << "\n";
}

int main() {
  myFunction();

  // We can also use x here
  cout << x;
  return 0;
}
```

## warning

```cpp
#include <iostream>
using namespace std;

// Global variable x
int x = 5;

void myFunction() {
  // Local variable with the same name as the global variable (x)
  int x = 22;

  cout << x << "\n";  // Refers to the local variable x
}

int main() {
  myFunction();

  cout << x;  // Refers to the global variable x
  return 0;
}
```
