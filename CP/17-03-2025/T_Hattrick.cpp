#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<vector<string>> tests;
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        vector<string> test;
        string a, b, c, d, e, f;
        cin >> a >> b >> c >> d >> e >> f;
        test.push_back(a);
        test.push_back(b);
        test.push_back(c);
        test.push_back(d);
        test.push_back(e);
        test.push_back(f);
        tests.push_back(test);
    }
    bool flag = false;
    for (int i = 0; i < tests.size(); i++)
    {
        // cout << "-------------------" << endl;
        // cout << tests[i][0] << tests[i][1] << tests[i][2] << tests[i][3] << tests[i][4] << tests[i][5] << endl;
        for (int j = 0; j < 4; j++)
        {

            // cout << "tests[" << i << "][" << j << "] = " << tests[i][j] << "\t";
            // cout << "tests[" << i << "][" << j + 1 << "] = " << tests[i][j + 1] << "\t";
            // cout << "tests[" << i << "][" << j + 2 << "] = " << tests[i][j + 2] << endl;

            if (tests[i][j] == "W" && tests[i][j] == tests[i][j + 1] && tests[i][j + 1] == tests[i][j + 2])
            {
                flag = true;
                cout << "YES" << endl;
                break;
            }
            else
            {
                flag = false;
            }
        }
        if (!flag)
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}

// NO YES NO YES NO YES NO YES
// 8 1 W W 4 5 1 W W W 4 5 1 2 3 W W 5 2 2 W W W 5 2 2 4 1 W W 6 2 4 W W W 6 6 6 6 1 W W 6 6 6 W W W