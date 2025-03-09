#include <iostream>

int main()
{
    int year;
    std::cin >> year;
    if (year >= 1973 && year <= 2024)
    {
        std::cout << "K" << std::to_string(year)[2] << std::to_string(year)[3] << std::endl;
    }
    return 0;
}

// Chef is interested by buying a new phone, and is in the process of researching what’s available on the market.

//                                               His favorite brand,
//     Kitchen Telecom, just released their latest model.Kitchen Telecom releases a new phone every year, and so names its phones based upon the year of release : the name of the phone model launched in year X X is K K(the letter) followed by the last two digits of X X.For instance, the phone model launched in the year 2024 2024 is named K24 K24.

//                                                                                                                                                                                                                                                                                          The current year is X X.What’s the latest phone model launched by Kitchen Telecom
//     ?

//     Input Format The first and only line of input contains a single integer X X,
//     the current year.Output Format
//     Print the name of Kitchen Telecom’s phone launched in year
//     X
//     X.

//     Constraints
//     1973
// ≤ X
// ≤ 2024 1973≤X≤2024