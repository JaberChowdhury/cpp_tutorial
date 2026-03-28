//  https://codeforces.com/group/MWSDmqGsZm/contest/329103/problem/D
//
//
//
//
#include <algorithm>
#include <iostream>
using namespace std;
#define endl '\n'
#define ll long long

void test(); // test func
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
        test();
    return 0;
}
int binary_search(int arr[], int low, int high, int search) {
    int mid = low + (high - low) / 2;
    if (arr[mid] == search) {
        return 1;
    }
    if (low > high) {
        return -1;
    }
    if (search < arr[mid]) {
        return binary_search(arr, low, mid - 1, search);
    } else {
        return binary_search(arr, mid + 1, high, search);
    }
    return -1;
}
void test() {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    sort(arr, arr + n);
    int count = 0;
    for (int i = 0; i < n; i++) {
        int result = binary_search(arr, 0, n - 1, arr[i] + 1);
        if (result == 1) {
            count++;
        }
    }

    cout << count << endl;
}
