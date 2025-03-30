#include <iostream>
#include <vector>
using namespace std;

int main() {
  vector<int> clicks;
  int n, d, clicked_time = 0;
  cin >> n >> d;

  for (int i = 0; i < n; i++) {
    int x;
    cin >> x;
    clicks.push_back(x);
  }

  for (int i = 0; i < n - 1; i++) {
    if (clicks[i + 1] - clicks[i] <= d) {
      clicked_time = clicks[i + 1];
      break;
    }
  }
  if (clicked_time != 0) {
    cout << clicked_time << endl;
  } else {
    cout << -1 << endl;
  }
  return 0;
}
