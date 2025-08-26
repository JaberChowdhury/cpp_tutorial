#include <cmath>
#include <iomanip>
#include <iostream>
#include <vector>
using namespace std;

class Menu {
  public:
    int selected;
    Menu(vector<string>& options) {
        vector<string> opts = options;
        opts.push_back("Exit");
        while (true) {
            cout << "\n========= MENU =========\n";
            for (int i = 0; i < opts.size(); i++) {
                cout << "[" << i << "] : " << opts[i] << endl;
            }

            cout << "Select option (0-" << opts.size() - 1 << "): ";
            if (!(cin >> selected)) {
                cin.clear();
                cin.ignore(1000, '\n');
                cout << "Invalid input! Try again.\n";
                continue;
            }

            if (selected == opts.size() - 1) {
                cout << "Program stopped.\n";
                exit(0);
            }

            if (selected >= 0 && selected < opts.size() - 1) {
                break;
            } else {
                cout << "Invalid option! Try again.\n";
            }
        }
    }
};

class Calculator {
  public:
    void addition() {
        cout << "\n========= addition =========\n";
        double a, b;
        cout << "Enter a: ";
        cin >> a;
        cout << "Enter b: ";
        cin >> b;
        cout << "Result: " << a << " + " << b << " = " << a + b << endl;
    }

    void subtraction() {
        cout << "\n========= subtraction =========\n";
        double a, b;
        cout << "Enter a: ";
        cin >> a;
        cout << "Enter b: ";
        cin >> b;
        cout << "Result: " << a << " - " << b << " = " << a - b << endl;
    }

    void multiplication() {
        cout << "\n========= multiplication =========\n";
        double a, b;
        cout << "Enter a: ";
        cin >> a;
        cout << "Enter b: ";
        cin >> b;
        cout << "Result: " << a << " * " << b << " = " << a * b << endl;
    }

    void division() {
        cout << "\n========= division =========\n";
        double a, b;
        cout << "Enter a: ";
        cin >> a;
        cout << "Enter b: ";
        cin >> b;
        if (b == 0) {
            cout << "Error: Division by zero!\n";
        } else {
            cout << "Result: " << a << " / " << b << " = " << a / b << endl;
        }
    }

    void logarithm() {
        cout << "\n========= logarithm =========\n";
        double x;
        cout << "Enter a positive number: ";
        cin >> x;
        if (x <= 0) {
            cout << "Error: log undefined for non-positive numbers!\n";
        } else {
            cout << "Result: log(" << x << ") = " << log(x) << endl;
        }
    }

    void trigonometry() {
        cout << "\n========= trigonometry =========\n";
        vector<string> trigOpts = {"sin(x)", "cos(x)", "tan(x)", "Main menu"};
        Menu           m(trigOpts);

        double       x;
        const double PI = 3.141592653589793;
        cout << "Enter angle in degrees: ";
        cin >> x;
        double rad = x * PI / 180.0;

        switch (m.selected) {
        case 0:
            cout << "sin(" << x << ") = " << sin(rad) << endl;
            break;
        case 1:
            cout << "cos(" << x << ") = " << cos(rad) << endl;
            break;
        case 2:
            cout << "tan(" << x << ") = " << tan(rad) << endl;
            break;
        case 3:
            return;
        }
    }
};

void init() {
    Calculator     calc;
    vector<string> mainMenu = {"Addition", "Subtraction", "Multiplication", "Division", "Trigonometry", "Logarithm"};

    while (true) {
        Menu m(mainMenu);
        switch (m.selected) {
        case 0:
            calc.addition();
            break;
        case 1:
            calc.subtraction();
            break;
        case 2:
            calc.multiplication();
            break;
        case 3:
            calc.division();
            break;
        case 4:
            calc.trigonometry();
            break;
        case 5:
            calc.logarithm();
            break;
        }
    }
}

int main() {
    init();
    return 0;
}
