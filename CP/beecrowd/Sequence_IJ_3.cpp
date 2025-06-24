// https://judge.beecrowd.com/en/problems/view/1097

#include <iostream>
using namespace std;

int main() {
    int start = 7, end = 5;
    for (int i = 1; i <= 9; i += 2) {
        for (int j = start; j >= end; j--) {
            cout << "I=" << i << " J=" << j << endl;
        }
        start += 2;
        end += 2;
    }
    return 0;
}

// solved
