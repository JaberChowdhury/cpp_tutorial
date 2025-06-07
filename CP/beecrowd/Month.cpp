// https://judge.beecrowd.com/en/problems/view/1052

#include <iostream>
using namespace std;

int main() {
    int month;
    cin >> month;
    string months[] = {"January", "February", "March",     "April",   "May",      "June",
                       "July",    "August",   "September", "October", "November", "December"};
    cout << months[month - 1] << endl;
    return 0;
}

// solved
