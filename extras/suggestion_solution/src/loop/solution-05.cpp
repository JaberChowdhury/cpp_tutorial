#include <cmath>
#include <iostream>
using namespace std;

bool isPrime(int num) {
    if (num <= 1)
        return false; // 0 and 1 are not prime
    if (num == 2)
        return true; // 2 is the only even prime
    if (num % 2 == 0)
        return false; // eliminate even numbers

    // Check only odd divisors up to sqrt(num)
    for (int i = 3; i <= sqrt(num); i += 2) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int limit;
    cout << "Enter a number: ";
    cin >> limit;

    cout << "Prime numbers between 1 and " << limit << " are:\n";
    for (int i = 2; i <= limit; i++) { // Start from 2, no need for limit+1
        if (isPrime(i)) {
            cout << i << " ";
        }
    }
    cout << endl;

    return 0;
}
