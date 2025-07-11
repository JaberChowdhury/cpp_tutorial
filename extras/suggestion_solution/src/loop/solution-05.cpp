#include <cmath>
#include <iostream>
using namespace std;

// bool isPrime(int num) {
//     bool ans  = true;
//     int  flag = 2;
//     while (flag <= sqrt(num)) {
//         if (num % flag != 0) {
//             flag++;
//         } else {
//             ans = false;
//             break;
//         }
//     }
//     return ans;
// }

// int main() {
//     int limit;
//     cin >> limit;
//     for (int i = 1; i <= limit + 1; i++) {
//         bool ans = isPrime(i);
//         if (ans) {
//             cout << i << endl;
//         }
//     }
//     return 0;
// }

bool isPrime(int num) {
    bool ans  = true;
    int  flag = 2;
    while (flag <= num) {
        if (num % flag != 0) {
            flag++;
        } else {
            ans = false;
            break;
        }
    }
    return ans;
}

int main() {
    int limit;
    cin >> limit;
    for (int i = 1; i <= limit + 1; i++) {
        bool ans = isPrime(i);
        if (ans) {
            cout << i << endl;
        }
    }
    return 0;
}
