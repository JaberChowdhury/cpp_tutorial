// https://judge.beecrowd.com/en/problems/view/1759

#include <iostream>
using namespace std;

int main() {
    int x;
    cin >> x;
    for (int i = 0; i < x; i++) {
        cout << "Ho";
        i != x - 1 ? (cout << " ") : cout << "";
        i == x - 1 && (cout << "!");
    }
    cout << endl;
    return 0;
}

// solved
