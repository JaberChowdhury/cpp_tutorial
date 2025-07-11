#include <cmath>
#include <iostream>
using namespace std;

int main() {
    int num;
    cin >> num;
    bool isPrime = true;
    for (int i = 2; i <= sqrt(num); i++) {
        if (num % i == 0) {
            isPrime = false;
            break;
        }
    }
    if (isPrime) {
        cout << "This is  a prime number " << endl;
    } else {
        cout << "This is not a prime number " << endl;
    }
    return 0;
}
