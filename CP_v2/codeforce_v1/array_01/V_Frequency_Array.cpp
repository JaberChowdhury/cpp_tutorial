// https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/V
//
//
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

class Item {
  public:
    int value = 0;
    int count = 0;
    Item(int value) { this->value = value; }
};

void solution() {
    int n, m;
    cin >> n >> m;

    int arr[n], count[m + 1];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    for (int i = 0; i <= m; i++) {
        count[i] = 0;
    }
    for (int i = 0; i < n; i++) {
        if (arr[i] >= 1 && arr[i] <= m) {
            count[arr[i]]++;
        }
    }

    for (int i = 1; i <= m; i++) {
        cout << count[i] << endl;
    }
}
