#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n;
  int fac = 1;
  if (n > 0) {
    for (int i = 1; i <= n; i++) {
      fac *= i;
    }
    cout << "Factorial of " << n << " = " << fac << endl;

  } else {
    cout << "Input can not be a negative number" << endl;
  }
  return 0;
}
