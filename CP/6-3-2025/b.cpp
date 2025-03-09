#include <iostream>
int main()
{
    int rainy, cloudy, clear;
    std::cin >> rainy >> cloudy;
    if (rainy >= 0 && rainy <= 7 && cloudy >= 0 && cloudy <= 7)
    {
        int sum = rainy + cloudy;
        if (sum >= 0 && sum <= 7)
        {
            clear = 7 - sum;
        }
    }
    std::cout << clear;
    return 0;
}