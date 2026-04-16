// fta -> fat -> atf
//
#include <iostream>
using namespace std;

void towerofhanoi(int n, char fromRod, char toRod, char auxRod) {
    if (n == 0) {
        return;
    }

    towerofhanoi(n - 1, fromRod, auxRod, toRod);
    cout << "Disk " << n << " moved from " << fromRod << " to " << toRod << endl;
    towerofhanoi(n - 1, auxRod, toRod, fromRod);
}
int main() {
    int n = 3;
    towerofhanoi(n, 'A', 'C', 'B');
    return 0;
}

// bag = 10kg
// price = []
// weight = []
//
// 100tk 2kg
// 100/2 = 50 ratio
// 200tk 1kg
// ratio 200
// 300tk 3kg
// 300/3 = 100
// 200 , 100, 50
//
// dynamic programming
// 1. memoization
// 2. tabulation
