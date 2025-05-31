#include <iostream>
#include <string>
#include <vector>
using namespace std;

// helper functions

// this function will print all options from the array/vector
void print_vector(const vector<string> datas) {
    for (int i = 0; i < datas.size(); i++) {
        cout << i + 1 << ".  " << datas[i] << endl;
    }
}

// this function will only take integer input from user and return it
// additionally it will generate the message
int take_input(const vector<string> datas) {
    print_vector(datas);
    int select;
    cout << "Select any option from 1 to " << datas.size() << " : ";
    cin >> select;
    return select;
}

// this function will take input with the range of array/vector !!
int take_option_input(const vector<string> datas) {
    int select = take_input(datas);
    for (int i = 0; i < 5; i++) {
        if (select == datas.size()) {
            break;
        } else if (select > datas.size() || select < 1) {
            cout << "[ WARN ] : Wrong input" << endl;
            select = take_input(datas);
        } else {
            break;
        }
    }
    return select;
}

// core functions
void BMI_CALCUATOR() {
    cout << "BMI_CALCUATOR is coming soon........" << endl;
};
void BMR_CALCUATOR() {
    cout << "BMR_CALCUATOR is coming soon........" << endl;
};

// all arithmatic functions
void handle_n_variable_addition(const string count) {
    int n, result = 0;
    if (count == "2") {
        n = 2;
    } else if (count == "3") {
        n = 3;
    } else {
        cout << "Enter the values for total variable count : ";
        cin >> n;
    }
    vector<double> nums;
    for (int i = 0; i < n; i++) {
        int x;
        cout << "a" << i + 1 << " : ";
        cin >> x;
        nums.push_back(x);
    }
    for (int i = 0; i < n; i++) {
        result += nums[i];
    }
    cout << "Total addition result : " << result << endl;
}
void handle_n_variable_operation(const string count, string operation) {
    int    n;
    double result = 0;
    if (count == "2") {
        n = 2;
    } else if (count == "3") {
        n = 3;
    } else {
        cout << "Enter the values for total variable count : ";
        cin >> n;
    }
    vector<double> nums;
    for (int i = 0; i < n; i++) {
        int x;
        cout << "a" << i + 1 << " : ";
        cin >> x;
        nums.push_back(x);
    }
    if (operation == "+") {
        for (int i = 0; i < n; i++) {
            result += nums[i];
        }
    } else if (operation == "-") {
        for (int i = 0; i < n; i++) {
            result -= nums[i];
        }
    } else if (operation == "/") {
        for (int i = 0; i < n; i++) {
            result /= nums[i];
        }
    } else if (operation == "*") {
        for (int i = 0; i < n; i++) {
            result *= nums[i];
        }
    } else if (operation == "%") {
        for (int i = 0; i < n; i++) {

            result = nums[i];
        }
    }

    cout << "Total [ " << operation << " ] operation result : " << result << endl;
}

void ARITHMATIC_LOGIC(string operation) {
    cout << "How many variable do you need : " << endl;
    vector<string> variations = {"2 variable (a1,a2)", "3 variable (a1,a2,a3)", "n variable (a1,a2,....,an)", "Exit"};
    int            selected_variation = take_option_input(variations);
    switch (selected_variation) {
    case 1:
        handle_n_variable_operation("2", operation);
        break;
    case 2:
        handle_n_variable_operation("3", operation);
        break;
    case 3:
        handle_n_variable_operation("n", operation);
    default:
        cout << "Thanks for staying with us" << endl;
    }
};

void REMAINDER() {
    cout << "REMAINDER is coming soon........" << endl;
};
void EQUATION() {
    cout << "EQUATION is coming soon........" << endl;
};
void ARITHMATIC_CALCULATOR() {
    vector<string> operations      = {"Addition [ + ]",
                                      "Subtraction [ - ]",
                                      "Multiplication [ * ]",
                                      "Division [ / ]",
                                      "Remainder [ % ]",
                                      "Equation [ type an equation using +,-,*,/]",
                                      "Exit"};
    int            operations_type = take_option_input(operations);
    switch (operations_type) {
    case 1:
        ARITHMATIC_LOGIC("+");
        break;
    case 2:
        ARITHMATIC_LOGIC("-");
        break;
    case 3:
        ARITHMATIC_LOGIC("*");
        break;
    case 4:
        ARITHMATIC_LOGIC("/");
        break;
    case 5:
        ARITHMATIC_LOGIC("%");
        break;
    case 6:
        EQUATION();
        break;
    case 7:
        cout << "Thanks for staying with us" << endl;
        break;
    default:
        cout << "BYE" << endl;
    }
};

// main/entry point of the program
int main() {
    vector<string> options         = {"BMI Calculator", "BMR Calculator", "Arithmatic Calculator", "Exit"};
    int            calculator_type = take_option_input(options);
    switch (calculator_type) {
    case 1:
        BMI_CALCUATOR();
        break;
    case 2:
        BMR_CALCUATOR();
        break;
    case 3:
        ARITHMATIC_CALCULATOR();
        break;
    case 4:
        cout << "Thanks for staying with us" << endl;
        break;
    default:
        cout << "BYE" << endl;
    }
    return 0;
}
