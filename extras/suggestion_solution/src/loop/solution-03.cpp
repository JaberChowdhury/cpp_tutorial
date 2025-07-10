#include <iostream>
using namespace std;

int main() {
    // factorial
    int num, result = 1;
    cin >> num;
    for (int i = 1; i <= num; i++) {
        result *= i;
    }
    cout << "Factorial of " << num << " is " << result << endl;
    return 0;
}
