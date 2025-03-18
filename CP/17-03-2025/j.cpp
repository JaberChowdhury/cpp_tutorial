#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> tests;
    int t, chef_age = 20, chefina_age = 10;
    cin >> t;
    for (int i = 1; i <= t; i++)
    {
        int x;
        cin >> x;
        tests.push_back(x);
    }
    for (int i = 0; i < tests.size(); i++)
    {
        cout << (tests[i] - chef_age) + chefina_age << endl;
    }
    return 0;
}