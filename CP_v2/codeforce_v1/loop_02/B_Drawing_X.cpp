
#include <iostream>
using namespace std;
#define endl '\n'

void test() {
    int x;
    cin >> x;
    int f1 = 0, f2 = 0, s = x - 1;
    for (int i = 0; i < x; i++) {
        for (int j = 0; j < x; j++) {

            if (!(i == x / 2 && j == x / 2)) {
                if (i == f1 && j == f2) {
                    cout << "\\";
                } else if (i == f1 && j == s) {
                    cout << "/";
                } else {
                    cout << "*";
                }
            } else {
                cout << "X";
            }
        }
        cout << endl;
        f1++;
        f2++;
        s--;
    }
};

int main() {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    // freopen("error.txt", "w", stderr);
#endif

    int t;
    cin >> t;
    while (t--)
        test();
    return 0;
}
