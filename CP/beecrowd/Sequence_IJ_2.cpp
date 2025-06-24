// https://judge.beecrowd.com/en/problems/view/1096

#include <iostream>
using namespace std;

int main() {

    for (int i = 1; i <= 9; i += 2) {
        for (int j = 7; j >= 5; j--) {
            cout << "I=" << i << " J=" << j << endl;
        }
    }
    return 0;
}

// solved
