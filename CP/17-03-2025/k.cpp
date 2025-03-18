#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int t;
    vector<vector<int>> tests;
    cin >> t;
    for (int i = 1; i <= t; i++)
    {
        vector<int> each_test;
        int x, y;
        cin >> x >> y;
        each_test.push_back(x);
        each_test.push_back(y);
        tests.push_back(each_test);
    }

    for (int i = 0; i < tests.size(); i++)
    {
        int can_go = tests[i][0] - tests[i][1];
        if (can_go < 0)
        {
            cout << 0 << endl;
        }
        else
        {
            cout << can_go << endl;
        }
    }
    return 0;
}
