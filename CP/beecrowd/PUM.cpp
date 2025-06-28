// https://judge.beecrowd.com/en/problems/view/1142

#include <iostream>
using namespace std;

int main() {

    int n = 7, f1 = 1;
    cin >> n;
    for (int i = 0; i < n; i++) {
        for (int j = 1; j <= 3; j++) {
            cout << f1 << " ";
            f1++;
        }
        cout << "PUM";
        f1++;
        cout << endl;
    }
    return 0;
}

// solved
