// https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/Z
//
//
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

void merge(ll arr[], ll left, ll mid, ll right) {
    ll n1 = (mid - left) + 1;
    ll n2 = right - mid;

    ll l[n1], r[n2];

    for (ll i = 0; i < n1; i++) {
        l[i] = arr[left + i];
    }
    for (ll i = 0; i < n2; i++) {
        r[i] = arr[mid + i + 1];
    }

    ll i = 0, j = 0, k = left;

    while (i < n1 && j < n2) {
        if (l[i] < r[j]) {
            arr[k++] = l[i++];
        } else {
            arr[k++] = r[j++];
        }
    }

    while (i < n1) {
        arr[k++] = l[i++];
    }
    while (j < n2) {
        arr[k++] = r[j++];
    }
}
void mergeSort(ll arr[], ll left, ll right) {

    if (left < right) {
        ll mid = left + (right - left) / 2;
        mergeSort(arr, left, mid);
        mergeSort(arr, mid + 1, right);
        merge(arr, left, mid, right);
    }
}

bool binarySearch(ll arr[], ll left, ll right, ll search) {
    ll mid = left + (right - left) / 2;

    if (arr[mid] == search) {
        return true;
    }
    if (left >= right)
        return false;

    if (search > arr[mid]) {
        return binarySearch(arr, mid + 1, right, search);
    } else {
        return binarySearch(arr, left, mid, search);
    }
    return false;
}

void solution() {
    ll n, q;
    cin >> n >> q;
    ll arr[n];
    for (ll i = 0; i < n; i++) {
        cin >> arr[i];
    }
    ll search[q];
    for (ll i = 0; i < q; i++) {
        cin >> search[i];
    }

    mergeSort(arr, 0, n - 1);

    for (ll i = 0; i < q; i++) {
        if (binarySearch(arr, 0, n - 1, search[i])) {
            cout << "found" << endl;
        } else {
            cout << "not found" << endl;
        }
    }
}
