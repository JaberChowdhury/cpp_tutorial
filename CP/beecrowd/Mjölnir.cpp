// https://judge.beecrowd.com/en/problems/view/1865

#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        string x;
        int    y;
        cin >> x >> y;

        if (x == "Thor") {
            cout << "Y" << endl;
        } else {
            cout << "N" << endl;
        }
    }
    return 0;
}

// solved
