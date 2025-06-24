#include <iostream>
#include <vector>
using namespace std;

int main() {
  int n = 10;
  cin >> n;
  int fibos[100] = {0, 1};
  for (int i = 2; i < n; i++) {
    fibos[i] = fibos[i - 2] + fibos[i - 1];
  }

  for (int i = 0; i < n; i++) {
    cout << "Position " << i + 1 << " fibonacchi = " << fibos[i] << endl;
  }
  return 0;
}

// int main() {
//   int n;
//   cin >> n;
//   vector<int> fibos = {0, 1};
//   for (int i = 2; i < n; i++) {
//     fibos[i] = fibos[i - 2] + fibos[i - 1];
//   }

//   for (int i = 0; i < n; i++) {
//     cout << "Position " << i + 1 << " fibonacchi = " << fibos[i] << endl;
//   }
//   return 0;
// }
