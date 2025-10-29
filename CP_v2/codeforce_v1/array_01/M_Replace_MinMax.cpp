// https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/M
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
    int arr[n];

    cin >> arr[0];
    int min = arr[0], max = arr[0], minindex = 0, maxindex = 0;

    for (int i = 1; i < n; i++) {
        cin >> arr[i];
        if (arr[i] > max) {
            max      = arr[i];
            maxindex = i;
        }
        if (arr[i] < min) {
            min      = arr[i];
            minindex = i;
        }
    }

    swap(arr[minindex], arr[maxindex]);

    //
    for (auto d : arr) {
        cout << d << " ";
    }

    cout << endl;
}
