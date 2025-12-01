#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

void solution();
int  main() {
    solution();
    return 0;
}

void solution() {
    vector<int> arr(3);
    cin >> arr[0] >> arr[1] >> arr[2];

    int min_num = min(min(arr[0], arr[1]), arr[2]), max_num = max(max(arr[0], arr[1]), arr[2]);

    if (max_num - min_num >= 10) {
        cout << "check again" << endl;
    } else {
        sort(arr.begin(), arr.end());
        cout << "final " << arr[1] << endl;
    }
}
