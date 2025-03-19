#include <iostream>
using namespace std;

struct Employee
{
    int id{};
    int age{};
    double wage{};
};

int main()
{
    Employee joe{};
    joe.id = 14;
    joe.age = 32;
    joe.wage = 60000.0;

    Employee frank{};
    frank.id = 15;
    frank.age = 28;
    frank.wage = 45000.0;

    int totalAge{joe.age + frank.age};
    cout << "Joe and Frank have lived " << totalAge << " total years\n";

    if (joe.wage > frank.wage)
        cout << "Joe makes more than Frank\n";
    else if (joe.wage < frank.wage)
        cout << "Joe makes less than Frank\n";
    else
        cout << "Joe and Frank make the same amount\n";

    // Frank got a promotion
    frank.wage += 5000.0;

    // Today is Joe's birthday
    ++joe.age; // use pre-increment to increment Joe's age by 1

    return 0;
}