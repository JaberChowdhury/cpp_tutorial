// https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/R
#include <iostream>
using namespace std;

int main() {
    long long time;
    cin >> time;
    int year  = time / 365;
    int month = (time % 365) / 30;
    cout << year << " years" << endl;
    cout << month << " months" << endl;
    cout << (time - ((year * 365) + (month * 30))) << " days" << endl;
    return 0;
}

// solved