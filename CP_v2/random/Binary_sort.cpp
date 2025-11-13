/*
You are given a sequence of n positive integers a1
, a2
, ....., an where 1 ≤ n ≤ 1000 and 1 ≤ ai ≤ 230
-1. You
have to make the sequence strictly increasing by performing following operation zero or more times:
● Choose an integer ai from the sequence where 1 ≤ i ≤ n.
● And perform ai = ai | (1 << p) where 0 ≤ p ≤ 59.
Here ‘|’ denotes ‘bitwise or’ operation and ‘1 << p’ means 2
p
.

Now you need to find the minimum number of operations needed to convert the given sequence to a strictly
increasing sequence. If it is not possible to make the sequence strictly increasing then output -1.
Input
The first line contains the number of test cases T where 1 ≤ T ≤ 10. Then T test cases follow. The first line
of each test case contains n (1 ≤ n ≤ 1000) and the second line contains the sequence of n positive
integers. The sum of n over all test cases is not larger than 5000.
Output
Print the case number in a single line followed by the minimum number of operations needed or -1 if there
is no solution.

Sample Input Output for Sample Input
3
5
5 2 1 3 4
3
1 3 9
2
2 2

Case 1: 4
Case 2: 0
Case 3: 1
 */
//
//
//
//
//
#include <bits/stdc++.h>
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

const int MAX_BITS = 60;

// Function to count set bits (0→1 flips)
int bitcount(ll x) {
    return __builtin_popcountll(x);
}

// Function to get minimum operations to make sequence strictly increasing
ll min_operations_to_increase(vector<ll>& a) {
    int n    = a.size();
    ll  prev = a[0];
    ll  ops  = 0;

    for (int i = 1; i < n; i++) {
        if (a[i] > prev) {
            prev = a[i];
            continue;
        }

        // Try to find minimal number > prev by OR-ing bits
        ll  best     = -1;
        int best_ops = INT_MAX;

        // Since we can only OR bits, we’ll try all possible single-bit or multi-bit changes
        // Greedy method: we want smallest value > prev achievable by setting bits
        for (int p = 0; p < MAX_BITS; p++) {
            ll candidate = a[i] | (1LL << p);
            if (candidate > prev) {
                int flips = bitcount(candidate ^ a[i]);
                if (flips < best_ops) {
                    best_ops = flips;
                    best     = candidate;
                }
            }
        }

        // If we couldn’t make a[i] > prev by just one bit, try combinations
        // (set multiple bits greedily)
        if (best == -1) {
            ll  x     = a[i];
            int flips = 0;
            for (int p = 0; p < MAX_BITS && x <= prev; p++) {
                if (!(x & (1LL << p))) {
                    x |= (1LL << p);
                    flips++;
                }
            }
            if (x <= prev)
                return -1; // impossible
            best     = x;
            best_ops = flips;
        }

        ops += best_ops;
        prev = best;
    }

    return ops;
}

void solution() {

    int T;
    cin >> T;
    for (int tc = 1; tc <= T; tc++) {
        int n;
        cin >> n;
        vector<ll> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];

        ll ans = min_operations_to_increase(a);
        cout << "Case " << tc << ": " << ans << "\n";
    }
}
