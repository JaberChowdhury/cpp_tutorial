#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main()
{
    int x, sum;
    string sx, a, b, c, abc, bca, cab;
    cin >> x;
    sx = to_string(x);
    a = sx[0];
    b = sx[1];
    c = sx[2];
    abc = a + b + c;
    bca = b + c + a;
    cab = c + a + b;

    sum = stoi(abc) + stoi(bca) + stoi(cab);
    cout << sum << endl;
    return 0;
}