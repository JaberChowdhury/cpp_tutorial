#include <iostream>
#include <cstdint>
using namespace std;

int main()
{
    int64_t Number{2'000'000'000};
    Number += 1'000'000'000;
    cout << Number;
    return 0;
}