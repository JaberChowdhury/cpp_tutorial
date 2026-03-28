// https://codeforces.com/group/MWSDmqGsZm/contest/329103/problem/B
//
//
//
//
#include <iostream>
#include <utility>
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
void reverse(int arr[], int start, int end) {
    while (start < end) {
        swap(arr[start++], arr[end--]);
    }
}

void test() {
    int n;
    cin >> n;

    int data[n];
    for (int i = 0; i < n; i++) {
        cin >> data[i];
    }

    for (int i = 0; i < n; i++) {
        if (data[i] == 0) {
            reverse(data, 0, i - 1);
        }
    }
    for (auto d : data) {
        cout << d << " ";
    }
}
