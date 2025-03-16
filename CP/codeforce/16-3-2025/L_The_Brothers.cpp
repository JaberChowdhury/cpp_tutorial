// https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/L

#include <iostream>
using namespace std;

string get_second_name(string name)
{
    string fname, lname;
    bool is_space = false;
    for (char x : name)
    {
        if (!is_space)
        {
            fname += x;
        }
        if (x == ' ')
        {
            is_space = true;
        }
        if (is_space)
        {
            lname += x;
        }
    }
    return lname;
}

int main()
{
    string p1, p2, p1lm, p2lm;
    getline(cin, p1);
    getline(cin, p2);
    p1lm = get_second_name(p1);
    p2lm = get_second_name(p2);
    if (p1lm == p2lm)
    {
        cout << "ARE Brothers" << endl;
    }
    else
    {
        cout << "NOT" << endl;
    }
    return 0;
}