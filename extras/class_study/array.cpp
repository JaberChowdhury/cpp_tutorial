#include <iostream>
using namespace std;

int main() {
  int limit;
  cin >> limit;
  int x[limit];
  for (int i = 0; i < limit; i++) {
    cin >> x[i];
  }

  for (int i = 0; i < limit; i++) {
    cout << "--------" << x[i] << endl;
  }
  return 0;
}
