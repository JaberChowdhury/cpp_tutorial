// https://judge.beecrowd.com/en/problems/view/1146
#include <iostream>
using namespace std;

int main() {
    int n = 1;
    while (n != 0) {
        cin >> n;
        for (int i = 1; i <= n; i++) {
            cout << i << (i != n ? " " : "");
        }

        n != 0 && cout << endl;
    }
    return 0;
}

// solved
