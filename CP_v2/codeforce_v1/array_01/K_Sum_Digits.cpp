// https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/K
//
//
//
//
#include <cstdint>
#include <iostream>
using namespace std;
#define endl '\n'
// #define ll long long
#define ll int64_t

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

    int n, sum = 0;
    cin >> n;
    string num;
    cin >> num;

    for (auto d : num) {
        sum += d - '0';
    }

    cout << sum << endl;
}
