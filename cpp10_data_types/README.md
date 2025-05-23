> A variable in C++ must be a specified data type.

### basic_data_types.cpp

```cpp
#include <iostream>
using namespace std;

int main() {
 int a = 82881;
 float b = 10.75;
 double c = 281.282;
 string d = "bdafabda7cc1bbc7969df7063b1";
 char e = 'g';
 bool f = true;
 bool g = false;

 std::cout << a << std::endl;
 std::cout << b << std::endl;
 std::cout << c << std::endl;
 std::cout << d << std::endl;
 std::cout << e << std::endl;
 std::cout << f << std::endl;
 std::cout << g << std::endl;
}
```

### numeric_data_types.cpp

```cpp
#include <iostream>
using namespace std;


int main() {
 float f1 = 35e3;
 double d1 = 12E4;
 cout << f1 << endl;
 cout << d1 << endl;
}
```

#### use case of 'e'

> A floating point number can also be a scientific number with an "e" to indicate the power of 10:

#### float vs. double

> The precision of a floating point value indicates how many digits the value can have after the decimal point. The precision of float is only six or seven decimal digits, while double variables have a precision of about 15 digits. Therefore it is safer to use double for most calculations.

# Integer data type

- C++ manages computer memory and different ways to store numbers.
- Computer memory is made up of `bits`, with `8 bits forming a byte`
- Different number types (like int8_t, int16_t, etc.) use different amounts of memory
- Using more memory allows us to store bigger numbers or more precise decimal values
- Unsigned integers can only store positive numbers and zero
- It's usually better to use signed integers and increase their size if needed
- When numbers exceed their type's range, they "overflow" and wrap around
- Floating point numbers come in different precisions (float vs double)
- Literals are fixed values in our code and have specific types
