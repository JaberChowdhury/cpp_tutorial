#include <iostream>
#include <string>
using namespace std;

class BMI_CALCULATOR
{
public:
    // Constructor should be public
    BMI_CALCULATOR(string name, float height, float weight)
    {
        this->name = name;
        this->height = height;
        this->weight = weight;
        this->bmi = 0;
    }

    float calculate_bmi()
    {
        bmi = weight / (height * height);
        return bmi; // Return the calculated BMI
    }

    void print_result()
    {
        calculate_bmi();
        cout << "Hi " << name << ",\n";
        cout << "Your height is " << height << " meters\n";
        cout << "Your weight is " << weight << " kg\n";
        cout << "Your BMI is " << bmi << endl;
    }

private:
    string name;
    float height;
    float weight;
    float bmi;
};

int main()
{
    BMI_CALCULATOR Jaber("Jaber", 1.68, 56);
    Jaber.calculate_bmi();
    Jaber.print_result();

    return 0;
}