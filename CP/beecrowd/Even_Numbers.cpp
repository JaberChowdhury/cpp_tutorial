// https://judge.beecrowd.com/en/problems/view/1059

#include <iostream>
using namespace std;

int main() {
    int i = 1;
    while (i < 101) {
        if (i % 2 == 0) {
            cout << i << endl;
        }
        i++;
    }
    return 0;
}

// solved
