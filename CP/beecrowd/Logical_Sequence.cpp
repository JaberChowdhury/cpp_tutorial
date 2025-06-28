// https://judge.beecrowd.com/en/problems/view/1144

#include <iostream>
#include <math.h>
using namespace std;

int main() {

    int n = 5;
    cin >> n;

    int f = 0;
    for (int i = 1; i <= n; i++) {
        printf("%d %d %d", (int) pow(i, 1), (int) pow(i, 2), (int) pow(i, 3));
        cout << endl;
        printf("%d %d %d", (int) pow(i, 1), (int) pow(i, 2) + 1, (int) pow(i, 3) + 1);
        cout << endl;
    }
    return 0;
}

// solved
