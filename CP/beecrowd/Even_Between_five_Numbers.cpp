// https://judge.beecrowd.com/en/problems/view/1065

#include <iostream>
using namespace std;

int main() {
    int count = 0;
    for (int i = 0; i < 5; i++) {
        int x;
        cin >> x;
        if (x < 0) {
            if ((x * (-1)) % 2 == 0) {
                count++;
            }
        } else if (x % 2 == 0) {
            count++;
        }
    }
    cout << count << " valores pares" << endl;
    return 0;
}

// solved
