#include <bits/stdc++.h>
#include <vector>
#include <string>
using namespace std;

int main()
{
    vector<int> lucky;
    int a, b;
    cin >> a >> b;
    for (int i = a; i <= b; i++)
    {
        string x = to_string(i);
        int first_digit_as_num = x[0] - '0';
        if (first_digit_as_num == 4 || first_digit_as_num == 7)
        {
            lucky.push_back(i);
        }
    }
    if (!lucky.empty())
    {
        for (int g : lucky)
        {
            cout << g << " ";
        }
    }
    else
    {
        cout << -1 << endl;
    }
    return 0;
}
