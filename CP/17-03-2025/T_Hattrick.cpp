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
    for (int i = 0; i < tests.size(); i++)
    {
        for (int j = 0; i < tests[i].size() - 2; j++)
        {
            if (tests[i][j] == tests[i][j + 1] && tests[i][j + 1] == tests[i][j + 2] && tests[i][j + 2] == tests[i][j + 3])
            {
                cout << "test[" << i << "][" << j + 1 << "]: " << tests[i][j + 1] << endl;
                cout << "test[" << i << "][" << j + 2 << "]: " << tests[i][j + 2] << endl;
                cout << "test[" << i << "][" << j + 3 << "]: " << tests[i][j + 3] << endl;
                //
                cout << "YES" << endl;
                break;
            }
            else
            {
                cout << "test[" << i << "][" << j + 1 << "]: " << tests[i][j + 1] << endl;
                cout << "test[" << i << "][" << j + 2 << "]: " << tests[i][j + 2] << endl;
                cout << "test[" << i << "][" << j + 3 << "]: " << tests[i][j + 3] << endl;
                //
                cout << "NO" << endl;
                break;
            }
        }
    }
    return 0;
}

// 4 1 2 W 0 W 6 W W W 6 6 6 W 4 W 0 W 6 1 W W W W 0