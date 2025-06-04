// https://judge.beecrowd.com/en/problems/view/1044

#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    if ((a > b && a % b == 0) || (b > a && b % a == 0)) {
        cout << "Sao Multiplos" << endl;
    } else {
        cout << "Nao sao Multiplos" << endl;
    }
    return 0;
}

// solved
