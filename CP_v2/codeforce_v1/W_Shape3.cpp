#include <iostream>
using namespace std;
#define endl '\n'

void test() {
    int N;
    cin >> N;

    // Top half
    for (int i = 1; i <= N; i++) {
        for (int s = 1; s <= N - i; s++)
            cout << " ";
        for (int j = 1; j <= 2 * i - 1; j++)
            cout << "*";
        cout << "\n";
    }

    // Bottom half
    for (int i = N; i >= 1; i--) {
        for (int s = 1; s <= N - i; s++)
            cout << " ";
        for (int j = 1; j <= 2 * i - 1; j++)
            cout << "*";
        cout << "\n";
    }
}

int main() {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int t;
    cin >> t;
    while (t--)
        test();
    return 0;
}
