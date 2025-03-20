#include <iostream>
using namespace std;

int main()
{
    // Cause cout to show more decimal places
    // when outputting floating point numbers
    cout.precision(16);

    float A{1.1111111111111111};
    std::cout << "Float Precision:  "
              << A + A << '\n';

    double B{1.1111111111111111};
    std::cout << "Double Precision: "
              << B + B;
    return 0;
}