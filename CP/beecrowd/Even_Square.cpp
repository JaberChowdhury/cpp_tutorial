// https://judge.beecrowd.com/en/problems/view/1073

#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        if (i % 2 == 0) {
            cout << i << "^2 = " << i * i << endl;
        }
    }
    return 0;
}

// solved
