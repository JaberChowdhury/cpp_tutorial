#include <iostream>
#include <cstdint>
using namespace std;

int main()
{
    int8_t SmallNumber{100};
    int16_t MediumNumber{10'000};
    int32_t LargeNumber{1'000'000'000};
    int64_t HugeNumber{1'000'000'000'000'000'000};
    cout << "SmallNumber: " << SmallNumber << endl;
    cout << "MediumNumber: " << MediumNumber << endl;
    cout << "LargeNumber: " << LargeNumber << endl;
    cout << "HugeNumber: " << HugeNumber << endl;
    return 0;
}