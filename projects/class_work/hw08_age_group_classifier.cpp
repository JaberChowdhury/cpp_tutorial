#include <iostream>
using namespace std;

int main() {
    int age;
    cout << "Enter your age : ";
    cin >> age;

    cout << (age > 0 ? (age >= 60                  ? "Senior"
                        : (age >= 20 || age <= 59) ? "Adult"
                        : (age >= 13 || age <= 19) ? "Teenager"
                        : (age < 13)               ? "Child"
                                                   : "")
                     : "Age must have to be greater than 0")
         << endl;
    return 0;
}
