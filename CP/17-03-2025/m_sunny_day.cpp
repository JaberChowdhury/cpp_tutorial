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
    for (int i = 0; i < tests.size(); i++)
    {
        if (tests[i] > 24)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}