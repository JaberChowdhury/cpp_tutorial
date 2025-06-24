// https://judge.beecrowd.com/en/problems/view/1075
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    for (int i = 0; i <= 10000; i++) {
        if (i % n == 0) {
            // cout << i << " % " << n << " = " << i % n << " so " << i << " + 2 = " << i + 2 << endl;
            cout << i + 2 << endl;
        }
    }

    return 0;
}

// solved
