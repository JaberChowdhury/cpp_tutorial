#include <iostream>
using namespace std;

int myFunction(int x)
{
    return 5 + x;
}

float calculate_bmi(float weight, float height)
{
    float bmi = weight / (height * height);
    return bmi;
}

int main()
{
    cout << myFunction(3) << endl;
    cout << "Your bmi is : " << calculate_bmi(58.8, 1.68) << endl;
    return 0;
}
