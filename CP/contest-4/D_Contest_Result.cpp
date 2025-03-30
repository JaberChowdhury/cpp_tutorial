#include <iostream>
#include <ostream>
#include <vector>
using namespace std;

int main() {
  int n, m;
  cin >> n >> m;
  vector<int> tests;
  vector<int> test_taken;
  int total_score = 0;
  for (int i = 0; i < n; i++) {
    int x;
    cin >> x;
    tests.push_back(x);
  }
  for (int i = 0; i < m; i++) {
    int x;
    cin >> x;
    test_taken.push_back(x);
  }
  for (int i = 0; i < m; i++) {
    // cout << "test_taken = " << test_taken[i] << endl;
    total_score += tests[test_taken[i] - 1];
  }
  cout << total_score << endl;
  return 0;
}
