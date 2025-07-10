#include <iostream>
using namespace std;

int main() {
    int year;
    cin >> year;
    if (year % 4 == 0) {
        if (year % 100 == 0) {
            if (year % 400 == 0) {
                cout << "Leap year" << endl;
            } else {
                cout << "Not a leap year" << endl;
            }
        } else {
            cout << "Leap year" << endl;
        }
    } else {
        cout << "Not a leap year" << endl;
    }
    return 0;
}

simple version int main() {
    int year;
    cin >> year;
    if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0) {
        cout << "Leap year" << endl;
    } else {
        cout << "Not a leap year" << endl;
    }
    return 0;
}
