#include <iostream>
#include <string>
using namespace std;

void myFunction(string country = "Norway")
{
    cout << country << "\n";
}

int main()
{
    myFunction("Sweden");
    myFunction("Bangladesh");
    myFunction();
    myFunction("USA");
    return 0;
}
