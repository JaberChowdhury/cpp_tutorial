#include <iostream>
using namespace std;

class Utils {
    int year;

  public:
    Utils(int& y) { year = y; }

  public:
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
        // take_input();
        bool result = check_leap_year();
        if (result) {
            cout << year << " is a leap year" << endl;
        } else {
            cout << year << " is not a leap year" << endl;
        }
    }
};

int main() {
    int year;
    cout << "Enter a year : ";
    cin >> year;
    Utils u(year);
    u.print_result();
    return 0;
}
