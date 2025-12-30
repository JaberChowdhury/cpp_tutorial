// https : // codeforces.com/problemset/problem/228/A
// //

#include <bits/stdc++.h>
#include <set>
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

    set<long int> x;
    for (int i = 0; i < 4; i++) {
        long int a;
        cin >> a;
        x.insert(a);
    }

    cout << 4 - (x.size()) << endl;
}
