// https://codeforces.com/problemset/problem/734/A
//
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int32_t main() {

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    freopen("error.txt", "w", stderr);
#endif

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    string res;

    cin >> res;

    int awin = 0, dwin;

    for (char x : res) {
        if (x == 'A') {
            awin++;
        }
    }

    dwin = n - awin;

    if (awin > dwin) {
        cout << "Anton" << endl;
    } else if (awin < dwin) {
        cout << "Danik" << endl;
    } else {
        cout << "Friendship" << endl;
    }

    return 0;
}

// i) g++ main.cpp -o main
// ii) ./main
// iii) g++ main.cpp -o main; if ($?) { ./main }
