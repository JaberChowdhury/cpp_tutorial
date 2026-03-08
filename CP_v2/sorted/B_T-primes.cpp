// https://codeforces.com/problemset/problem/230/B
//
//
//
//
#include <cmath>
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

// // it works but time out error
// ll count_prime(ll x) {

//     if (x < 4) {
//         return 0;
//     }

//     ll count = 2;
//     if (x % 2 == 0) {
//         cout << x << " => Even" << endl;
//         cout << 1 << " ";
//         for (ll i = 2; i <= (x / 2); i++) {
//             if (x % i == 0) {
//                 cout << i << " ";
//                 count++;
//             }
//             if (count > 3) {
//                 break;
//             }
//         }
//         cout << x << endl;
//     } else {
//         cout << x << " => Odd" << endl;
//         cout << 1 << " ";

//         for (ll i = 2; i <= sqrt(x); i++) {
//             if (x % i == 0) {
//                 cout << i << " ";
//                 count++;
//             }
//             if (count > 3) {
//                 return 10;
//             }
//         }
//         cout << x << endl;
//     }

//     return count;
// }
ll count_prime(ll x) {
    cout << "x = " << x << endl;
    if (x < 4) {
        return 0;
    }

    ll count = 2;
    if (x % 2 == 0) {
        return count += count_prime(x / 2);
    } else {
        return count += count_prime(sqrt(x));
    }

    return count;
}

void solution() {
    ll n;
    cin >> n;

    ll arr[n];
    for (ll i = 0; i < n; i++) {
        cin >> arr[i];
    }
    for (ll i = 0; i < n; i++) {
        int res = count_prime(arr[i]);
        cout << res << endl;
        if (res == 3) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
}
