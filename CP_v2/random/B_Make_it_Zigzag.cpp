// https://codeforces.com/contest/2154/problem/B
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

int maximum(int arr[], int limit) {
    int max_value = arr[1];
    for (int i = 2; i <= limit; i++) {
        if (arr[i] > max_value) {
            max_value = arr[i];
        }
    }
    return max_value;
}

void test() {
    int n, operation = 0;
    cin >> n;
    int arr[n];

    for (int i = 1; i <= n; i++) {
        cin >> arr[i];
    }

    for (int i = 1; i <= n - 1; i++) {
        if (i % 2 != 0) {
            if (!(arr[i] < arr[i + 1])) {
                if (arr[i] < maximum(arr, i)) {
                    arr[i + 1] = maximum(arr, i);
                } else {
                    if (arr[i] == arr[i + 1]) {
                        cout << "op1" << endl;
                        operation++;
                        arr[i]--;
                    } else {
                        cout << "op2" << endl;
                        arr[i] = arr[i] - (arr[i + 1] + 1);
                        operation += (arr[i] - arr[i + 1]) + 1;
                    }
                }
            }
        } else if (i % 2 == 0) {
            if (!(arr[i] > arr[i + 1])) {
                if (arr[i] > maximum(arr, i)) {
                    arr[i] = maximum(arr, i);
                } else {
                    if (arr[i] == arr[i + 1]) {
                        cout << "op3" << endl;
                        operation++;
                        arr[i + 1]--;
                    } else {
                        cout << "op4" << endl;
                        arr[i + 1] = arr[i - 1] - (arr[i]);
                        operation += (arr[i]) + 1;
                    }
                }
            }
        }
    }

    cout << operation << endl;
}

void solution() {
    int t;
    cin >> t;

    while (t--)
        test();
}
