#include <iostream>
#include <string>
using namespace std;

void myFunction(string fname, float bmi)
{
    cout << fname << " Refsnes" << " and my bmi is " << bmi << " ." << endl;
}

int main()
{
    myFunction("Liam", 12.76);
    myFunction("Jenny", 65.22);
    myFunction("Anja", 89.65);
    return 0;
}
