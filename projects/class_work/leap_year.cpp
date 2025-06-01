#include <iostream>
using namespace std;

class Utils {
    int year;

  public:
    void take_input() {
        cout << "Enter a year : ";
        cin >> year;
    }

    bool check_leap_year() {
        if (year % 400 == 0) {
            return true;
        } else if (year % 100 == 0) {
            return false;
        } else if (year % 4 == 0) {
            return true;
        } else {
            return false;
        }
    }

    void print_result() {
        take_input();
        bool result = check_leap_year();
        if (result) {
            cout << year << " is a leap year" << endl;
        } else {
            cout << year << " is not a leap year" << endl;
        }
    }
};

int main() {
    Utils u;
    u.print_result();
    return 0;
}
