// https://codeforces.com/problemset/problem/4/A

#include <iostream>
using namespace std;

int main() {
    int x, divided_by_2;
    cin >> x;
    divided_by_2 = x / 2;

    if (x % 2 == 0) {
        if (x / 2 == 1) {
            cout << "NO";
        }
        if (x / 2 >= 2) {
            cout << "YES";
        }
    } else {
        cout << "NO";
    }

    return 0;
}
