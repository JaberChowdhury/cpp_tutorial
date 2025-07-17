// https://judge.beecrowd.com/en/problems/view/1175

#include <iostream>
using namespace std;

int main() {
    int nums[20];
    for (int i = 19; i >= 0; i--) {
        cin >> nums[i];
    }
    for (int i = 0; i < 20; i++) {
        cout << "N[" << i << "] = " << nums[i] << endl;
    }
    return 0;
}

// solved
