// https://judge.beecrowd.com/en/problems/view/1557

#include <iomanip>
#include <iostream>
#include <math.h>
#include <string>
#include <vector>
using namespace std;

void print_matrix(int n) {
    vector<int> store = {1};
    for (int j = 1; j <= n * 2; j++) {
        int x = store[j - 1] * 2;
        store.push_back(x);
    }

    int flag = 0;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            int max_value = pow(2, 2 * n - 2);
            int T         = to_string(max_value).length();
            cout << setw(T) << store[flag] << "  ";
            flag++;
        }
        flag = 1;
        flag *= i;
        cout << endl;
    }
}

int main() {
    int n = 5;

    while (cin >> n && n != 0) {
        print_matrix(n);
        cout << endl;
    }
    return 0;
}

// solved
