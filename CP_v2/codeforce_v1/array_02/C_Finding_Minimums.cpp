//  https://codeforces.com/group/MWSDmqGsZm/contest/326907/problem/C
//
//
//
//
#include <iostream>
#include <vector>
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
vector<vector<int>> divide_array(const vector<int>& arr, int k) {
    vector<vector<int>> pieces;
    for (int i = 0; i < arr.size(); i += k) {
        vector<int> temp;
        for (int j = i; j < k + i; j++) {
            if (j == arr.size()) {
                break;
            }

            temp.push_back(arr[j]);
        }
        pieces.push_back(temp);
    }
    return pieces;
}
int minimum(vector<int> arr) {
    int min = arr[0];
    for (auto d : arr) {
        if (min > d) {
            min = d;
        }
    }
    return min;
}

void test() {
    int n, k;
    cin >> n >> k;

    vector<int> nums;
    for (int i = 0; i < n; i++) {
        int d;
        cin >> d;
        nums.push_back(d);
    }

    vector<vector<int>> divided = divide_array(nums, k);

    for (auto d : divided) {
        int min = minimum(d);
        cout << min << " ";
    }
    cout << endl;
}
