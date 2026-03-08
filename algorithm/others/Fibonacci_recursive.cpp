#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long

void solution(); // solution func
int  main() {
    solution();
    return 0;
}

// ll memo[1120]; // global, zero-initialized

// ll fibo(ll x) {
//     if (x <= 1)
//         return 1;
//     if (memo[x]) {
//         return memo[x];
//     }
//     printf("memo[%lld] = %lld\n", x, memo[x]);
//     return memo[x] = fibo(x - 1) + fibo(x - 2);
// }

ll fibo(ll x) {
    if (x <= 1) {
        return x;
    }
    return fibo(x - 1) + fibo(x - 2);
}
void solution() {
    ll n;
    cin >> n;
    for (ll i = 0; i < n; i++) {
        ll x;
        cin >> x;
        cout << fibo(x) << endl;
    }
}
