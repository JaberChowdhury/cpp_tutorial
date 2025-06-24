// https://judge.beecrowd.com/en/problems/view/1099
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> sums(n);

    for (int i = 0; i < n; i++) {
        int x, y, sum = 0;
        cin >> x >> y;

        // Ensure x < y
        if (x > y) {
            int temp = x;
            x        = y;
            y        = temp;
        }

        for (int j = x + 1; j < y; j++) {
            if (j % 2 != 0) {
                sum += j;
            }
        }

        sums[i] = sum;
    }

    for (int i = 0; i < n; i++) {
        cout << sums[i] << endl;
    }

    return 0;
}
