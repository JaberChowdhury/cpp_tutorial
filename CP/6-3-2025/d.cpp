#include <iostream>
#include <string>
int main()
{
    int a, b, sum, c = 0;
    std::cin >> a >> b;

    if (a >= 1 && a <= 50 && b >= 1 && b <= 50)
    {
        sum = a + b;
        std::string str = std::to_string(sum) + "1";
        c = std::stoi(str);
    }
    std::cout << c << std::endl;
    return 0;
}