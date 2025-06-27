#include <iostream>
// pattern printing
using namespace std;

int main() {
    // big to small
    // for (int i = 0; i <= 5; i++) {
    //   for (int j = 5; j > i; j--) {
    //     cout << "*";
    //   }
    //   // cout << endl;
    //   printf("\n");
    // }
    //
    //  small to big
    // for (int i = 1; i <= 5; i++) {
    //   for (int j = 1; j <= i; j++) {
    //     cout << "*";
    //   }
    //   // cout << endl;
    //   printf("\n");
    // }
    // dimond

    int n  = 3;
    int f1 = n;
    int f2 = 0;
    for (int i = 1; i <= n; i++) {
        for (int x = 0; x < f1; x++) {
            cout << "  ";
            f1--;
        }
        for (int j = 1; j <= i; j++) {
            cout << "* ";
        }
        if (i > 1) {
            for (int j = 2; j <= i; j++) {
                cout << "* ";
            }
        }
        if (i <= n) {

            cout << endl;
        }
    }
    for (int i = 0; i < n - 2; i++) {
        cout << "  ";
        for (int j = n; j >= i - 1; j -= 2) {
            cout << "* ";
        }
        cout << endl;
    }
    cout << "    *" << endl;
    return 0;
}
