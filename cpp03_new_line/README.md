To insert a new line, you can use the \n character:

``` cpp
#include <iostream>
using namespace std;

int main() {
  cout << "Hello World! \n";
  cout << "I am learning C++";
  return 0;
}
```

Another way to insert a new line, is with the endl manipulator:

``` cpp
#include <iostream>
using namespace std;

int main() {
  cout << "Hello World!" << endl;
  cout << "I am learning C++";
  return 0;
}
```


 escape sequences

| Escape Sequence | Description                       | Example                  |
|-----------------|-----------------------------------|--------------------------|
| \t              | Creates a horizontal tab          | "Hello\tWorld"           |
| \\              | Inserts a backslash character (\) | "C:\\Users\\username"    |
| \"              | Inserts a double quote character  | "She said: \"Hello\""    |