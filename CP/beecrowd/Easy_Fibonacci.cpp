// https://judge.beecrowd.com/en/problems/view/1151
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int fib[n] = {0, 1};
    for (int i = 2; i < n; i++) {
        // cout << "fib[" << i << "] = " << fib[i] << endl;
        fib[i] = fib[i - 1] + fib[i - 2];
    }

    for (int i = 0; i < n; i++) {
        cout << fib[i] << (i < n - 1 ? " " : "");
        // cout << "fib[" << i << "] = " << fib[i] << endl;
    }
    cout << endl;
    return 0;
}

// solved
