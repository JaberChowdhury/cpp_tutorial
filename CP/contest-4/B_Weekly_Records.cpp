#include <iostream>
#include <vector>
using namespace std;

int main() {
  int total_week;
  cin >> total_week;
  vector<int> steps;
  int sum = 0;
  for (int i = 1; i <= (total_week * 7); i++) {
    int x;
    cin >> x;
    sum += x;
    if (i > 4 && i % 7 == 0) {
      steps.push_back(sum);
      sum = 0;
    }
  }
  for (auto i : steps) {
    cout << i << " ";
  }
  cout << endl;
  return 0;
}
