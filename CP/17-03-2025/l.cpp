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
        int x, y;
        cin >> x >> y;
        each_test.push_back(x);
        each_test.push_back(y);
        tests.push_back(each_test);
    }
    for (int i = 0; i < tests.size(); i++)
    {
        cout << tests[i][1] - tests[i][0] << endl;
    }
    return 0;
}