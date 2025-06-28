// https://judge.beecrowd.com/en/problems/view/1149

#include <iostream>
using namespace std;

int main() {
    int a, n, sum = 0;
    cin >> a;

    do {
        cin >> n;
    } while (n <= 0);
    // cout << "A =" << a << " N =" << n << endl;

    int limit = a + n;
    for (int i = a; i < limit; i++) {
        sum += i;
    }
    cout << sum << endl;
    return 0;
}

// solved
