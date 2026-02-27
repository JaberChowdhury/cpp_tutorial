// https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/S//
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
    int a, b, search, size;
    cin >> a >> b;

    size = a * b;

    int arr[size];
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    cin >> search;

    for (int i = 0; i < size; i++) {
        if (arr[i] == search) {
            cout << "will not take number" << endl;
            return;
        }
    }

    cout << "will take number" << endl;
}
