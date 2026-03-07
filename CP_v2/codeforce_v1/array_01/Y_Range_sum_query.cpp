// https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/Y
//
//
//
//
//
//
#include <iomanip>
#include <iostream>
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

void solution() {

    ll n, q;
    cin >> n >> q;
    ll arr[n];
    for (ll i = 0; i < n; i++) {
        cin >> arr[i];
    }
    ll pairs[q][2];
    for (ll i = 0; i < q; i++) {
        for (ll j = 0; j < 2; j++) {
            cin >> pairs[i][j];
        }
    }

    ll prefix[n];
    prefix[0] = arr[0];
    for (ll i = 1; i < n; i++) {
        prefix[i] = 0;
        prefix[i] = prefix[i - 1] + arr[i];
    }

    for (auto d : pairs) {
        if (d[0] == 1) {
            cout << prefix[d[1] - 1] << endl;
        } else {
            cout << prefix[d[1] - 1] - prefix[d[0] - 2] << endl;
        }
    }

    // for (auto d : prefix) {
    //     cout << d << " ";
    // }
}
