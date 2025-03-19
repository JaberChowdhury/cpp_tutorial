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
        vector<int> each_test(4);
        cin >> each_test[0] >> each_test[1] >> each_test[2] >> each_test[3];
        tests.push_back(each_test);
    }
    for (const auto &test : tests)
    {
        int net_export_of_c = (((test[0] - test[1]) + (test[2] - test[3])) * (-1));
        // net_export_of_c > 0 ? cout << "YES" << endl : cout << "NO" << endl;
        cout << (net_export_of_c > 0 ? "YES" : "NO") << endl;
    }
    return 0;
}
