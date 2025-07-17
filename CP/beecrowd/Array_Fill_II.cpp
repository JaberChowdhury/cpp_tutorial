// https://judge.beecrowd.com/en/problems/view/1177

#include <iostream>
using namespace std;

int main() {
    int nums[1001];
    int x, flag = 0;
    cin >> x;
    for (int i = 0; i < 1000; i++) {
        nums[i] = flag;
        flag++;
        if (flag == x) {
            flag = 0;
        }
    }

    for (int i = 0; i < 1000; i++) {
        cout << "N[" << i << "] = " << nums[i] << endl;
    }
    return 0;
}

// solved
