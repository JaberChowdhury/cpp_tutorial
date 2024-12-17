#include <iostream>

/*
 BMI = weight (kg) / [height (m)]^2

Under 18.5: Underweight
18.5–24.9: Healthy weight range
25–29.9: Overweight
30–34.9: Class I obesity
35–39.9: Class II obesity
40 or more: Class III obesity
*/

int main()
{
    double weight, height;
    std::cout << "Enter your weight (in kg): ";
    std::cin >> weight;
    std::cout << "Enter your height (in meters): ";
    std::cin >> height;

    // BMI calculation
    double bmi = weight / (height * height);
    std::cout << "Your BMI is: " << bmi << "\n";

    // BMI categories
    if (bmi < 18.5)
    {
        std::cout << "Underweight";
    }
    else if (bmi >= 18.5 && bmi <= 24.9)
    {
        std::cout << "Healthy weight range";
    }
    else if (bmi >= 25 && bmi <= 29.9)
    {
        std::cout << "Overweight";
    }
    else if (bmi >= 30 && bmi <= 34.9)
    {
        std::cout << "Class I obesity";
    }
    else if (bmi >= 35 && bmi <= 39.9)
    {
        std::cout << "Class II obesity";
    }
    else // bmi >= 40
    {
        std::cout << "Class III obesity";
    }

    return 0;
}
