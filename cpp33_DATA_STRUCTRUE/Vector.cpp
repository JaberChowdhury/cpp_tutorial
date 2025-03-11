#include <vector>
#include <iostream>

using namespace std;

int main()
{

    vector<int> rolls = {12, 34, 45, 65, 13, 99};
    for (int roll : rolls)
    {
        cout << roll << endl;
    }

    vector<string> names = {"Jaber", "Tuhin", "Masum", "Sifat", "Soykot", "Yeasin", "Maruf", "Sabbir"};
    // update a value
    names[3] = "Sifat bro";
    for (string frnd : names)
    {
        cout << frnd << endl;
    }

    // Access a vector
    cout << names[0] << endl;
    cout << names[1] << endl;
    cout << names[2] << endl;
    cout << names[3] << endl;
    cout << names.front() << endl;
    cout << names.back() << endl;
    cout << names.at(4) << endl;
    cout << names.at(1) << endl;
    // cout << names.at(100) << endl;
    // Change a Vector Element
    names[2] = "Masum bro";

    // Add Vector Elements
    names.push_back("Abrar");
    names.push_back("Abrar");

    // Remove Vector Elements
    names.pop_back();

    // Vector Size
    cout << "Size of vector names " << names.size() << endl;

    // Check if a Vector is Empty
    cout << "IS names vectis empty ? " << names.empty() << endl;

    // Loop Through a Vector
    vector<double> weights = {322.43, 87346.3264, 845.273, 23326.876, 983247.9876};
    // Loop Through a Vector
    for (int i = 0; i < weights.size(); i++)
    {
        cout << "Your score is " << weights[i] << endl;
    }
    return 0;
}