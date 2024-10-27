#include <iostream>
using namespace std;

int main() {
  int x = 197;
  int y = 328;

  cout << x + y << "\n";
  cout << x - y << "\n";
  cout << x * y << "\n";
  cout << x / y << "\n";
  cout << x % y << "\n";
  cout << x++ << "\n";
  cout << x-- << "\n";

  int a = 10;
  a += 10;
  cout << "Value of a is " << a << "\n";

  int b = 10;
  b -= 10;
  cout << "Value of b is " << b << "\n";

  int c = 10;
  c *= 10;
  cout << "Value of c is " << c << "\n";

  int d = 10;
  d /= 10;
  cout << "Value of d is " << d << "\n";

  int e = 10;
  e %= 10;
  cout << "Value of e is " << e << "\n";

  int f = 10;
  f &= 10;
  cout << "Value of f is " << f << "\n";

  int g = 10;
  g |= 10;
  cout << "Value of g is " << g << "\n";

  int h = 10;
  h ^= 10;
  cout << "Value of h is " << h << "\n";

  int i = 10;
  i >>= 10;
  cout << "Value of i is " << i << "\n";

  int j = 10;
  j <<= 10;
  cout << "Value of j is " << j << "\n";

  return 0;
}
