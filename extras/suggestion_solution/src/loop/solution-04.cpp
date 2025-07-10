#include <iostream>
#include <vector>
using namespace std;

vector<int> get_divisor(int num) {
    vector<int> result;
    int         div = 2;
    while (num != 1) {
        if (num % div == 0) {
            result.push_back(div);
            num /= div;
        } else {
            div++;
        }
    }
    return result;
}

int main() {
    // GCD = Greatest Common Divisor
    // LCM = Least Common Multiple
    int n1 = 36, n2 = 60;
    // cin >> n1 >> n2;

    vector<int> r1 = get_divisor(n1);
    vector<int> r2 = get_divisor(n2);
    vector<int> factors;

    int limit = r1.size();
    if (r2.size() > r1.size()) {
        limit = r2.size();
    }

    for (int i = 0; i < limit; i++) {
        if (r1[i] == r2[i]) {
            factors.push_back(r1[i]);
            cout << "Factors = " << r1[i] << endl;
        } else {
            break;
        }
    }

    int gcd = 1;
    for (int i = 0; i < factors.size(); i++) {
        gcd *= factors[i];
    }

    cout << "gcd = " << gcd << endl;
    return 0;
}
// on progress
