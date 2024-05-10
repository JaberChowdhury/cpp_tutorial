Variables are containers for storing data values.

In C++, there are different types of variables (defined with different keywords), for example:

- `int` - stores integers (whole numbers), without decimals, such as 123 or -123
- `double` - stores floating point numbers, with decimals, such as 19.99 or -19.99
- `char` - stores single characters, such as 'a' or 'B'. Char values are surrounded by single quotes
- `string` - stores text, such as "Hello World". String values are surrounded by double quotes
- `bool` - stores values with two states: true or false


``` cpp
#include <iostream>
using namespace std;


int main() {
  int a = 77;
  char b = 'g';
  double c = 5.75;
  string d = "M11 21h-1l1-7H6.74S10.42 7.54 13 3h1l-1 7h4.28L";
  bool e = true; // 1
  bool f = false; /* 0 */
  
  cout << a << endl;
  cout << b << endl;
  cout << c << endl;
  cout << d << endl;
  cout << e << endl;
  cout << f << endl;
  return 0;
}
```