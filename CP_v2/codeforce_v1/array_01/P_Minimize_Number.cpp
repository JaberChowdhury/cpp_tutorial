// https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/P
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

void solution() {
    int n;
    cin >> n;
    ll arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    bool shouldContinue = true;
    int  op             = 0;
    while (shouldContinue) {
        for (int i = 0; i < n; i++) {
            if (arr[i] % 2 == 0) {
                arr[i] = arr[i] / 2;
            } else {
                shouldContinue = false;
                break;
            }
        }
        if (!shouldContinue) {
            break;
        }
        op++;
    }

    cout << op << endl;
}
