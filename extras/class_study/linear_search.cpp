#include <iostream>
using namespace std;

int main() {
  int limit, y;
  cin >> limit;
  int x[limit];
  for (int i = 0; i < limit; i++) {
    cin >> x[i];
  }

  cout << "Search number : ";
  cin >> y;
  for (int i = 0; i < limit; i++) {
    if (x[i] == y) {
      cout << "Number found" << endl;
      break;
    } else {
      cout << "Number didnt found found" << endl;
      break;
    }
  }
  return 0;
}
