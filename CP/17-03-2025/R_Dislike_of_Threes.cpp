#include <iostream>
#include <vector>
using namespace std;
bool ends_with_3(int value)

{
    string x = to_string(value);
    if ((x[x.length() - 1] - '0') == 3)
    {
        return true;
    }
    else
    {
        return false;
    }
}

void get_nth_Polycarp(int k)
{
    vector<int> liked_number;

    for (int i = 1; i <= 10000; i++)
    {
        // if ((i % 3 != 0) && !ends_with_3(i) && liked_number.size() < k)
        if ((i % 3 != 0) && !ends_with_3(i))
        {
            liked_number.push_back(i);
        }
        if (liked_number.size() == k)
        {
            break;
        }
    }
    cout << liked_number.back() << endl;
}

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
        int k = tests[i];
        // cout << "test[" << i << "] = " << tests[i] << endl;
        get_nth_Polycarp(k);
    }
    return 0;
}