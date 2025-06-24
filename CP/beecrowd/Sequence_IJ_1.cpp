// https://judge.beecrowd.com/en/problems/view/1095

#include <iostream>
using namespace std;

int i = 1;
int main() {
    for (int j = 60; j >= 0; j -= 5) {
        cout << "I=" << i << " J=" << j << endl;
        i += 3;
    }
    return 0;
}

// solved
