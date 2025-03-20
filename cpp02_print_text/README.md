The cout `object`, together with the << operator, is used to output values/print text:

```cpp
#include <iostream>
using namespace std;

int main() {
 cout << "Hello World!";
 return 0;
}
```

## Chaining << Operators

```cpp
#include <iostream>
using namespace std;

int main(){
  cout << "Hello World!\n"
       << "My Name is Ryan\n"
       << "Goodbye";
}
```
