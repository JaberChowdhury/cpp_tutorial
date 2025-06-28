// https://judge.beecrowd.com/en/problems/view/1145

#include <iostream>
using namespace std;

int main() {

    int x = 5, y = 55;
    cin >> x >> y;
    int flag = 0;

    do {
        for (int i = 0; i < x; i++) {
            flag++;
            cout << flag << (i != x - 1 ? " " : "");
        }
        cout << endl;
    } while (flag < y);
    return 0;
}

// solved
