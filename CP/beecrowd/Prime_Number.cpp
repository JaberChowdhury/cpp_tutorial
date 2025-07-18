// https://judge.beecrowd.com/en/problems/view/1165
#include <cmath>
#include <iostream>
using namespace std;

bool isPrime(int x) {
    if (x <= 1)
        return false;
    if (x == 2)
        return true;
    if (x % 2 == 0)
        return false;

    int limit = sqrt(x);
    for (int i = 3; i <= limit; i += 2) {
        if (x % i == 0)
            return false;
    }
    return true;
}

int main() {
    int N, X;
    cin >> N;

    for (int i = 0; i < N; i++) {
        cin >> X;
        if (isPrime(X))
            cout << X << " eh primo" << endl;
        else
            cout << X << " nao eh primo" << endl;
    }

    return 0;
}

// solved
