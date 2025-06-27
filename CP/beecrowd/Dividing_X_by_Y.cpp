// https://judge.beecrowd.com/en/problems/view/1116

#include <iomanip>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<string> result;
    for (int i = 0; i < n; i++) {
        int x, y;
        cin >> x >> y;
        if (y == 0) {
            result.push_back("divisao impossivel");
        } else {
            result.push_back(to_string(float(x) / y));
        }
    }

    for (int i = 0; i < n; i++) {
        if (result[i] != "divisao impossivel") {
            cout << fixed << setprecision(1) << stof(result[i]) << endl;
        } else {
            cout << result[i] << endl;
        }
    }
    return 0;
}

// solved
