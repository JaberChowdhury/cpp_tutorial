// https: // bapsoj.org/icpc-preli-online-2024-c4asujje.pdf
//
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

void test() {
    int n, k;
    cin >> n >> k;

    ll wcount = 0;

    for (int i = 0; i < n; i++) {
        int x, y;
        cin >> x >> y;
        wcount += k / x;
    }

    cout << wcount << endl;
}
void solution() {
    int t;
    cin >> t;
    while (t--)
        test();
}
