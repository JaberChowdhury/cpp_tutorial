// https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/Q
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
bool isIncreasing(int arr[], int size) {

    bool increasing = true;

    // for (int i = 0; i < size; i++) {
    //     cout << arr[i] << " ,";
    // }
    // cout << endl;
    if (size == 1) {

        return true;
    }

    for (int i = 1; i < size; i++) {
        if (arr[i] > arr[i - 1]) {
            continue;
        } else {
            increasing = false;
            break;
        }
    }

    return increasing;
}
void test() {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int increasingcount = 0;
    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
            int size = (j - i) + 1;
            int subarray[size];
            int count = 0;
            for (int k = i; k <= j; k++) {
                subarray[count] = arr[k];
                count++;
            }
            bool result = isIncreasing(subarray, size);
            // cout << (result ? "increasing" : "decreasing") << endl;
            if (result == true) {
                increasingcount++;
            }
        }
    }
    cout << increasingcount << endl;
}
void solution() {
    int t;
    cin >> t;

    while (t--) {
        test();
    }
}
