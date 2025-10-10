// https://codeforces.com/group/MWSDmqGsZm/contest/326907/problem/C
//
//

#include <iostream>
#include <vector>
using namespace std;
#define endl '\n'

vector<vector<int>> to2DVector(const vector<int>& arr, size_t chunkSize) {
    vector<vector<int>> result;

    for (size_t i = 0; i < arr.size(); i += chunkSize) {
        size_t end = min(arr.size(), i + chunkSize);
        result.emplace_back(arr.begin() + i, arr.begin() + end);
    }
    return result;
}

int find_minimum(vector<int> arr) {
    int min = arr[0];
    for (auto d : arr) {
        if (d < min) {
            min = d;
        }
    }
    return min;
}
void test() {
    int a, b;
    cin >> a >> b;
    vector<int> arr;
    for (int i = 0; i < a; i++) {
        int x;
        cin >> x;
        arr.push_back(x);
    }

    vector<vector<int>> s = to2DVector(arr, b);

    for (vector<int> d : s) {
        cout << find_minimum(d) << " ";
    }
    cout << endl;
};

int main() {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int t;
    cin >> t;
    while (t--)
        test();
    return 0;
}
