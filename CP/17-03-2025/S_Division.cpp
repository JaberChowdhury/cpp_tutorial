#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> tests;
    int t;
    cin >> t;
    for (int i = 1; i <= t; i++)
    {
        int x;
        cin >> x;
        tests.push_back(x);
    }
    for (int test : tests)
    {
        if (test >= 1900)
        {
            cout << "Division 1" << endl;
        }
        else if (test >= 1600 && test <= 1899)
        {
            cout << "Division 2" << endl;
        }
        else if (test >= 1400 && test <= 1599)
        {
            cout << "Division 3" << endl;
        }
        else if (test <= 1399)
        {
            cout << "Division 4" << endl;
        }
    }
    return 0;
}