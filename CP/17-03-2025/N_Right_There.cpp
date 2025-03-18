#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<vector<int>> tests;
    int t;
    cin >> t;
    for (int i = 1; i <= t; i++)
    {
        vector<int> each_test;
        int n, x;
        cin >> n >> x;
        each_test.push_back(n);
        each_test.push_back(x);
        tests.push_back(each_test);
    }

    for (int i = 0; i < tests.size(); i++)
    {
        if (tests[i][1] >= tests[i][0])
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