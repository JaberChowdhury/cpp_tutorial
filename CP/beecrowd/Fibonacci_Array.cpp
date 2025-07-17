// https://judge.beecrowd.com/en/problems/view/1176
#include <iostream>
using namespace std;

int main() {
    long long int x[70] = {0, 1};

    for (int i = 2; i < 61; i++) {
        x[i] = x[i - 1] + x[i - 2];
    }

    int t;
    cin >> t;
    long long int ans[t];
    int           tt[t];
    for (int i = 0; i < t; i++) {
        int z;
        cin >> z;
        tt[i]  = z;
        ans[i] = x[z];
    }

    for (int i = 0; i < t; i++) {
        cout << "Fib(" << tt[i] << ") = " << ans[i] << endl;
    }

    return 0;
}

// solved
