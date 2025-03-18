// https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/O

#include <iostream>
#include <vector>
using namespace std;

char get_operator(string expression)
{
    for (char x : expression)
    {
        if (x == '+' || x == '-' || x == '*' || x == '/')
        {
            return x;
        }
    }
    return '\0';
}

vector<int> get_numbers(string expression)
{
    vector<int> nums;
    string a, b;
    bool is_operator = false;

    for (char x : expression)
    {
        if (!is_operator && (x != '+' && x != '-' && x != '*' && x != '/'))
        {
            a += x;
        }
        else if (!is_operator)
        {
            is_operator = true;
        }
        else
        {
            b += x;
        }
    }

    int x = stoi(a);
    int y = stoi(b);
    nums.push_back(x);
    nums.push_back(y);
    return nums;
}

int main()
{
    string input;
    cin >> input;

    char op = get_operator(input);
    vector<int> nums = get_numbers(input);

    int a = nums[0];
    int b = nums[1];

    switch (op)
    {
    case '+':
        cout << a + b << endl;
        break;
    case '-':
        cout << a - b << endl;
        break;
    case '*':
        cout << a * b << endl;
        break;
    case '/':
        cout << a / b << endl;
        break;
    }

    return 0;
}
