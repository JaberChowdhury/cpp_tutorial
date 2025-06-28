// https://judge.beecrowd.com/en/problems/view/1150
#include <iostream>
using namespace std;

int main() {
    int x, y, sum = 0;
    cin >> x;
    do {
        cin >> y;
    } while (y <= x);

    int temp = x, flag = 0;

    while (y >= sum) {
        sum += temp;
        temp++;
        flag++;
    }

    cout << flag << endl;
    return 0;
}

// solved
