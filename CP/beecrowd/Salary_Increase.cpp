// https://judge.beecrowd.com/en/problems/view/1048

#include <iomanip>
#include <iostream>
using namespace std;

int main() {
    float salary, extra;
    int   parcentage;
    cin >> salary;
    if (salary >= 0 && salary <= 400.00) {
        extra = salary * 0.15;
        salary += extra;
        parcentage = 15;
    } else if (salary >= 400.01 && salary <= 800.00) {
        extra = salary * 0.12;
        salary += extra;
        parcentage = 12;
    } else if (salary >= 800.01 && salary <= 1200.00) {
        extra = salary * 0.10;
        salary += extra;
        parcentage = 10;
    } else if (salary >= 1200.01 && salary <= 2000.00) {
        extra = salary * 0.07;
        salary += extra;
        parcentage = 7;
    } else if (salary > 2000.00) {
        extra = salary * 0.04;
        salary += extra;
        parcentage = 4;
    }

    cout << "Novo salario: " << fixed << setprecision(2) << salary << endl;
    cout << "Reajuste ganho: " << fixed << setprecision(2) << extra << endl;
    cout << "Em percentual: " << parcentage << " %" << endl;

    return 0;
}

// solved
