#include <iostream>
#include <vector>
using namespace std;
bool cut_varticle(int a, int b) {
    int a1 = a / 2;
    int b1 = b * 2;
    if (a == 1 || a % 2 != 0) {
        // cout << "a % 2 != " << a % 2 << endl;
        return false;
    } else {
        if (b1 == b && a1 == a) {
            return false;
        } else if (b1 == a && a1 == b) {
            return false;
        } else {
            return true;
        }
    }
}
bool cut_horizontal(int a, int b) {
    int b1 = b / 2;
    int a1 = a * 2;
    if (b == 1 || b % 2 != 0) {
        // cout << "b % 2 != " << b % 2 << endl;
        return false;
    } else {
        if (a1 == a && b1 == b) {
            return false;
        } else if (a1 == b && b1 == a) {
            return false;
        } else {
            return true;
        }
    }
}
int main() {
    int t;
    cin >> t;
    vector<vector<int>> tests;
    for (int i = 0; i < t; i++) {
        int a, b;
        cin >> a >> b;
        vector<int> test;
        test.push_back(a);
        test.push_back(b);
        tests.push_back(test);
    }

    for (int i = 0; i < t; i++) {
        bool x = cut_horizontal(tests[i][0], tests[i][1]);
        bool y = cut_varticle(tests[i][0], tests[i][1]);
        if (x == true) {
            // cout << "a = " << tests[i][0] << " b = " << tests[i][1] << " it can be cut horizontally" << endl;
            cout << "yes" << endl;
        } else if (y == true) {
            // cout << "a = " << tests[i][0] << " b = " << tests[i][1] << " it can be cut vartecally" << endl;
            cout << "yes" << endl;
        } else {
            // cout << "a = " << tests[i][0] << " b = " << tests[i][1] << " it can't be cut" << endl;
            cout << "no" << endl;
        }
        // cut_varticle(tests[i][0], tests[i][1]);
    }
    return 0;
}

// solved