// https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/P

#include <iostream>
using namespace std;

int main()
{
    string input;
    getline(cin, input);
    int first_digit = input[0] - '0';
    if (first_digit % 2 == 0)
    {
        cout << "EVEN" << endl;
    }
    else
    {
        cout << "ODD" << endl;
    }
    return 0;
}