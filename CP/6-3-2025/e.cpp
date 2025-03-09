#include <iostream>

int main()
{
    int N, note;
    std::cin >> N;
    if (N >= 1 && N <= 100)
    {
        note = (N * 2000) / 500;
    }
    std::cout << note << std::endl;
    return 0;
}