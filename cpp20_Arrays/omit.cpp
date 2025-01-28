#include <iostream>
#include <string>
using namespace std;

int main()
{
    string awesomeString[] = {"Hello", "World", "!"};
    awesomeString[2] = "haha";
    awesomeString[3] = "hmm";
    cout << awesomeString[2] << endl;
    cout << awesomeString[3] << endl;
    return 0;
}
