#include <iostream>
using namespace std;

void printHelloWorld(int i)
{
    int x = 0;
    cout << "Hello World" << endl;
    cout << i << endl;
    x += i * (100 * 20) * 567;
    cout << x << endl;
}

int main()
{
    for (int i = 0; i < 100; i++)
    {
        cout << "Hello World" << endl;
        cout << i << endl;
        printHelloWorld(i);
    }
    return 0;
}