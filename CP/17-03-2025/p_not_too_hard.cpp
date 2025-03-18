#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> tests;
    int t, x;
    cin >> t >> x;
    for (int i = 1; i <= t; i++)
    {
        int k;
        cin >> k;
        tests.push_back(k);
    }
    int sum = 0;
    for (int i = 0; i < tests.size(); i++)
    {
        if (tests[i] <= x)
        {
            sum += tests[i];
        }
    }

    cout << sum << endl;
    return 0;
}