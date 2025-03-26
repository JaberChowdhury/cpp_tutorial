#include <iostream>
#include <vector>
using namespace std;

int main() {
  vector<int> tests;
  int t;
  cin >> t;

  for (int i = 1; i <= t; i++) {
    int n, x = 0;
    cin >> n;
    for (int k = 0; k < n; k++) {
      int a;
      cin >> a;
      if (a % 2 != 0) {
        x++;
      }
    }
    tests.push_back(x);
  }

  for (auto i : tests) {
    cout << i << endl;
  }
  return 0;
}
