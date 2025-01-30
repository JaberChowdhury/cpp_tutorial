# function

```cpp
#include <iostream>
#include <string>
using namespace std;

void myFunction(string fname) {
  cout << fname << " Refsnes\n";
}

int main() {
  myFunction("Liam");
  myFunction("Jenny");
  myFunction("Anja");
  return 0;
}
```

> When a parameter is passed to the function, it is called an argument. So, from the example above: fname is a parameter, while Liam, Jenny and Anja are arguments .

## default parameter

```cpp
#include <iostream>
#include <string>
using namespace std;

void myFunction(string country = "Norway") {
  cout << country << "\n";
}

int main() {
  myFunction("Sweden");
  myFunction("India");
  myFunction();
  myFunction("USA");
  return 0;
}
```

> A parameter with a default value, is often known as an "optional parameter". From the example above, country is an optional parameter and "Norway" is the default value.

## Functions - Pass By Reference

```cpp
#include <iostream>
using namespace std;

void swapNums(int &x, int &y) {
  int z = x;
  x = y;
  y = z;
}

int main() {
  int firstNum = 10;
  int secondNum = 20;

  cout << "Before swap: " << "\n";
  cout << firstNum << secondNum << "\n";

  swapNums(firstNum, secondNum);

  cout << "After swap: " << "\n";
  cout << firstNum << secondNum << "\n";

  return 0;
}
```

## Pass Array to a Function

```cpp
#include <iostream>
using namespace std;

void myFunction(int myNumbers[5]) {
  for (int i = 0; i < 5; i++) {
    cout << myNumbers[i] << "\n";
  }
}

int main() {
  int myNumbers[5] = {10, 20, 30, 40, 50};
  myFunction(myNumbers);
  return 0;
}
```

> The function (myFunction) takes an array as its parameter (int myNumbers[5]), and loops through the array elements with the for loop.When the function is called inside main(), we pass along the myNumbers array, which outputs the array elements.Note that when you call the function, you only need to use the name of the array when passing it as an argument myFunction(myNumbers). *`However, the full declaration of the array is needed in the function parameter (int myNumbers[5]).`*
