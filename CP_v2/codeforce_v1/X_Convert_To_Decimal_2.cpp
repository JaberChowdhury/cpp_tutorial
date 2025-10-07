
#include <cmath>
#include <cstdint>
#include <iostream>
#include <string>
using namespace std;
#define endl '\n'

int64_t convert_to_decimal(int64_t n) {
    int64_t dec = 0, i = 0, rem;

    while (n != 0) {
        rem = n % 10;
        n /= 10;
        dec += rem * pow(2, i);
        ++i;
    }

    return dec;
}
int64_t convert_to_bin(int64_t n) {
    int64_t bin = 0;
    int64_t rem, i = 1;

    while (n != 0) {
        rem = n % 2;
        n /= 2;
        bin += rem * i;
        i *= 10;
    }

    return bin;
}

int64_t extract_one_and_to_decimal(int64_t b) {

    string b_string = to_string(b), ext_string = "";

    for (char c : b_string) {
        if (c == '1') {
            ext_string += "1";
        }
    }

    int64_t decimal = convert_to_decimal(stoi(ext_string));
    return decimal;
}
void test() {
    int t;
    cin >> t;

    for (int i = 0; i < t; i++) {
        int64_t a;
        cin >> a;

        int64_t bin = convert_to_bin(a);
        int64_t ans = extract_one_and_to_decimal(bin);
        cout << ans << endl;
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
