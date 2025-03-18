//  https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/M

#include <iostream>
using namespace std;

int main()
{
    char input;
    cin >> input;

    // int input_ascii = int(input);
    int input_ascii = (int)input;
    if (input_ascii >= 65 && input_ascii <= 90)
    {
        cout << "ALPHA" << endl;
        cout << "IS CAPITAL" << endl;
    }
    else if (input_ascii >= 97 && input_ascii <= 122)
    {
        cout << "ALPHA" << endl;
        cout << "IS SMALL" << endl;
    }
    else if (input_ascii >= 48 && input_ascii <= 57)
    {
        cout << "IS DIGIT" << endl;
    }
    return 0;
}