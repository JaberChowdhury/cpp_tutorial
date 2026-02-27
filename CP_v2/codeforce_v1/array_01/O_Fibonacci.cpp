// https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/O
//
//
//
//
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

ll nthFibo(int n) {
    ll fibos[60] = {0, 1};
    // for (auto d : fibos) {
    //     cout << d << " ";
    // }
    for (int i = 2; i < n; i++) {
        fibos[i] = fibos[i - 1] + fibos[i - 2];
    }
    return fibos[n - 1];
}
void solution() {
    int n;
    cin >> n;
    cout << nthFibo(n) << endl;
}
