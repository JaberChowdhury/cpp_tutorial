#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter a number : ";
    cin >> num;

    cout << ((num % 3 == 0 && num % 5 == 0) ? "The number is multiple of 3 and 5"
                                            : "The number is not multiple of 3 and 5")
         << endl;
    return 0;
}
