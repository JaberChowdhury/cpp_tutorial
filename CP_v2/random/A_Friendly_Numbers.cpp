// https://codeforces.com/problemset/problem/2197/A
//
//
//
//
#include <bits/stdc++.h>
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

int digit_sum(ll x) {
    int sum = 0;
    while (x != 0) {
        sum += x % 10;
        x /= 10;
    }
    return sum;
}
bool isSatisfy(ll x, ll y) {
    if (y - digit_sum(y) == x) {
        return true;
    } else {
        return false;
    }
}
void test() {
    ll x;
    cin >> x;

    int result = 0;
    for (ll i = x; i < x + 400; i++) {
        if (isSatisfy(x, i)) {
            // cout << i << endl;
            result++;
        }
    }
    cout << result << endl;
}
void solution() {
    int t;
    cin >> t;
    while (t--) {
        test();
    }
}
