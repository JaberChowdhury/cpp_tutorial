// https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/R
//
//
//
#include <algorithm>
#include <iostream>
#include <utility>
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
// int partition(int arr[], int low, int high) {

//     int i     = low - 1;
//     int pivot = arr[high];

//     for (int j = low; j < high; j++) {
//         if (arr[j] < pivot) {
//             i++;
//             int temp = arr[i];
//             arr[i]   = arr[j];
//             arr[j]   = temp;
//             // swap(arr[j], arr[i]);
//         }
//     }

//     int temp   = arr[high];
//     arr[high]  = arr[i + 1];
//     arr[i + 1] = temp;

//     // swap(arr[high], arr[i + 1]);

//     return i + 1;
// }

// void quicksort(int arr[], int low, int high) {
//     if (low < high) {
//         int pi = partition(arr, low, high);

//         quicksort(arr, low, pi - 1);
//         quicksort(arr, pi + 1, high);
//     }
// }

// void solution() {
//     int n;
//     cin >> n;
//     int a[n], b[n];
//     for (int i = 0; i < n; i++) {
//         cin >> a[i];
//     }
//     for (int i = 0; i < n; i++) {
//         cin >> b[i];
//     }

//     quicksort(a, 0, n - 1);
//     quicksort(b, 0, n - 1);

//     bool ispermutation = true;

//     for (int i = 0; i < n; i++) {
//         if (a[i] != b[i]) {
//             ispermutation = false;
//             break;
//         }
//     }

//     if (ispermutation) {
//         cout << "yes" << endl;
//     } else {
//         cout << "no" << endl;
//     }
// }

void solution() {
    int n;
    cin >> n;
    vector<int> a(n), b(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++) {
        cin >> b[i];
    }

    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    bool ispermutation = true;
    for (int i = 0; i < n; i++) {
        if (a[i] != b[i]) {
            ispermutation = false;
            break;
        }
    }

    if (ispermutation) {
        cout << "yes" << endl;
    } else {
        cout << "no" << endl;
    }
}
