//
//
//
//
//
#include <bits/stdc++.h>
#include <vector>
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

void remove_jth(vector<int>& arr, int c) {

    vector<int> result;

    for (auto d : arr) {
        if (d != c) {
            result.push_back(d);
        }
    }

    arr = result;
}

void solution() {
    int n, k;
    cin >> n >> k;

    vector<int>         non_available = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    vector<vector<int>> data;

    for (int i = 0; i < n; i++) {
        vector<int> temp;
        for (int j = 0; j < 6; j++) {
            int x;
            cin >> x;
            temp.push_back(x);
            // remove jth from non_available    
            remove_jth(non_available, x);
        }
        data.push_back(temp);
    }

    for (auto d : non_available) {
        cout << d << " ";
    }
    cout << endl;
}
