// https://codeforces.com/problemset/problem/25/A

#include <iostream>
#include <vector>
using namespace std;

int main() {

    int n;
    cin >> n;

    vector<int> nums, even_index, odd_index;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        nums.push_back(x);
    }

    int total_even = 0, total_odd = 0;
    for (int i = 0; i < n; i++) {
        if (nums[i] % 2 == 0) {
            total_even++;
            even_index.push_back(i + 1);
            // cout << "even number = " << nums[i] << " index = " << i + 1 << endl;
        } else {
            total_odd++;
            odd_index.push_back(i + 1);
            // cout << "odd number = " << nums[i] << " index = " << i + 1 << endl;
        }
    }
    // cout << "even_index[even_index.size() - 1] " << even_index.size()  << endl;
    // cout << "odd_index[odd_index.size() - 1] " << odd_index.size()  << endl;
    if (total_even > total_odd) {
        cout << odd_index[odd_index.size() - 1] << endl;
    } else {
        cout << even_index[even_index.size() - 1] << endl;
    }
    return 0;
}

// solved