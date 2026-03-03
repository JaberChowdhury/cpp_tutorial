// https://codeforces.com/group/MWSDmqGsZm/contest/326175/problem/H
//
//
//
//
//
//
//
#include <cstdint>
#include <iostream>
#include <string>
using namespace std;
#define endl '\n'
#define ll long long

void solution(); // solutioin func
int  main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    // freopen("error.txt", "w", stderr);
    int t;
    cin >> t;
    while (t--)
#endif
        solution();
    return 0;
}
bool isDouble(long double num) {
    string x = to_string(num);
    // cout << " x = " << x << endl;
    int i = 0;
    for (i = 0; i < x.size(); i++) {
        if (x[i] == '.') {
            break;
        }
    }
    // cout << " i = " << i << endl;
    if (x[i + 1] == '0' && x[i + 2] == '0') {
        return false;
    } else {
        return true;
    }
}
void solution() {
    long long n, k, a;
    cin >> n >> k >> a;

    // Check if result is a non-integer (double)
    __int128 product = (__int128) n * k;
    if (product % a != 0) {
        cout << "double" << endl;
        return;
    }

    long long result = (long long) (product / a);
    if (result > 2147483647LL || result < -2147483648LL) {
        cout << "long long" << endl;
    } else {
        cout << "int" << endl;
    }
}
