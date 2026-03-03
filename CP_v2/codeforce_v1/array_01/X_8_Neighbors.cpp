// https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/W
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

void solution() {
    int n, m;
    cin >> n >> m;

    char arr[n][m];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> arr[i][j];
        }
    }

    int x, y;
    cin >> x >> y;
    x--;
    y--;
    if (
        // left side
        arr[x - 1][y - 1] == 'X' && arr[x][y - 1] == 'X' && arr[x + 1][y - 1] == 'X' &&
        // right side
        arr[x][y + 1] == 'X' && arr[x + 1][y + 1] == 'X' && arr[x - 1][y + 1] == 'X' &&
        // top
        arr[x - 1][y] == 'X' &&
        // bottom
        arr[x + 1][y] == 'X') {
        cout << "yes" << endl;
    } else {
        cout << "no" << endl;
    }
}

// not solved
