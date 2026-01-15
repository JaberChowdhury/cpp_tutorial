// https://codeforces.com/problemset/problem/230/A
//
//
//
//
//
//
//
#include <algorithm>
#include <iostream>
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

struct duel {
    int strength;
    int bonus;
};
void solution() {
    int kirito_strength, total_duel;
    cin >> kirito_strength >> total_duel;
    vector<duel> data(total_duel);

    for (int i = 0; i < total_duel; i++) {
        duel d;
        cin >> d.strength >> d.bonus;
        data[i] = d;
    }

    sort(
        //
        data.begin(),
        //
        data.end(),
        //
        [](const duel& a, const duel& b) {
            //
            return a.strength < b.strength;
        }
        //
    );

    bool canPass = true;

    for (auto d : data) {

        if (kirito_strength > d.strength) {
            kirito_strength += d.bonus;
        } else {
            canPass = false;
            break;
        }
    }

    if (canPass) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
}
