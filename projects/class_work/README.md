# Assignment

## 1. Even or Odd

```cpp
#include <iostream>
using namespace std;

int main() {
    int x;
    cout << "Enter a numeric value : ";
    cin >> x;
    cout << (x >= 0 ? (x % 2 == 1 ? "This ia a ODD number ." : "This is a EVEN number .")
                    : "Enter a value greater than or equal to 0")
         << endl;
    return 0;
}
```

## output

![1](https://i.ibb.co/q3h9XBJz/Screenshot-2025-06-06-151732.png)

## 2. Find the largest of two numbers

```cpp
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int         n = 2;
    vector<int> nums;
    for (int i = 0; i < n; i++) {
        int x;
        cout << "A" << i + 1 << " : ";
        cin >> x;
        nums.push_back(x);
    }

    // buble sorting
    for (int i = 0; i < n; i++) {
        for (int k = 0; k < n - i - 1; k++) {
            if (nums[k] < nums[k + 1]) {
                int a       = nums[k];
                int b       = nums[k + 1];
                nums[k]     = b;
                nums[k + 1] = a;
            }
        }
    }

    // for (int i = 0; i < n; i++) {
    //     cout << nums[i] << endl;
    // }
    cout << "The maximum number is : " << nums[0] << endl;
    return 0;
}
```

## output

![02](https://i.ibb.co/nqm9TMGG/Screenshot-2025-06-06-152012.png)

## 3. Simple Calculator

```cpp
#include <cstdlib> // for exit()
#include <iostream>
#include <string>
#include <vector>
using namespace std;

// entry of our console app
void init();

// this will help beautify our logging
class Logger {
  public:
    enum Level { INFO, WARN, ERROR };
    Level log_level = INFO;

  private:
    const string RESET       = "\033[0m";
    const string INFO_LBL    = "\033[30;42m";
    const string INFO_MSG    = "\033[32m";
    const string WARN_LBL    = "\033[30;43m";
    const string WARN_MSG    = "\033[33m";
    const string ERROR_LBL   = "\033[30;41m";
    const string ERROR_MSG   = "\033[31m";
    const string SUCCESS_LBL = "\033[30;46m"; // Cyan background
    const string SUCCESS_MSG = "\033[36m";    // Cyan text
    const string LEVEL_BLUE  = "\033[34m";    // Blue text
    const string LEVEL_RED   = "\033[91m";    // Bright red text

  public:
    void set_log_level(const Level value) { log_level = value; }

    void info(const string& msg) {
        if (log_level <= INFO)
            cout << INFO_LBL << "[INFO]" << RESET << " : " << INFO_MSG << msg << RESET << endl;
    }

    void warn(const string& msg) {
        if (log_level <= WARN)
            cout << WARN_LBL << "[WARN]" << RESET << " : " << WARN_MSG << msg << RESET << endl;
    }

    void error(const string& msg) {
        if (log_level <= ERROR)
            cout << ERROR_LBL << "[ERROR]" << RESET << " : " << ERROR_MSG << msg << RESET << endl;
    }

    void success(const string& msg) {
        cout << SUCCESS_LBL << "[SUCCESS]" << RESET << " : " << SUCCESS_MSG << msg << RESET << endl;
    }

    void level(const string& msg) { cout << INFO_MSG << msg << RESET; }

    void level_blue(const string& msg) { cout << LEVEL_BLUE << msg << RESET; }

    void level_red(const string& msg) { cout << LEVEL_RED << msg << RESET; }

    void print_options(const vector<string>& datas) {
        cout << INFO_MSG << "Select any one option from 1 to " << datas.size() << " : " << RESET << endl;
        for (int i = 0; i < datas.size(); i++) {
            cout << INFO_LBL << "[" << i + 1 << "]" << RESET << ". " << datas[i] << endl;
        }
    }
};

// this will help use to handle user input based on options
class Form {
  private:
    int            vector_length = 0;
    vector<string> options;
    int            selected_option = -1;

  public:
    Form(vector<string> datas) {
        options = datas;
        options.push_back("Back");
        options.push_back("Exit");
        vector_length = options.size();
    }

    void print_options() {
        cout << "\033[2J\033[1;1H\n"; // clear the terminal every time before rendering the options
        Logger log;
        log.print_options(options);
    }

    int take_input() {
        Logger log;
        while (true) {
            log.level("Select one option: ");
            cin >> selected_option;

            // if (cin.fail() || selected_option < 1 || selected_option > vector_length) {
            //     log.warn("Invalid input! Try again.");
            //     cin.clear();
            //     cin.ignore(numeric_limits<streamsize>::max(), '\n');
            //     continue;
            // }

            if (selected_option < 1 || selected_option > vector_length) {
                log.warn("Invalid input! Try again.");
                cin.clear();
                continue;
            }

            if (selected_option == vector_length) {
                log.error("Exiting program...");
                exit(0);
            }

            if (selected_option == vector_length - 1) {
                log.warn("Going back to previous menu...");
                return -1;
            }

            return selected_option;
        }
    }
};

// Calculator class with methods for each operation
class Calculator {
  private:
    Logger log;

  public:
    int get_variable_count() {
        vector<string> opt = {"2 variable  (a1,a2)", "3 variable  (a1,a2,a3)", "n variable  (a1,a2,....,an)"};
        Form           form(opt);
        form.print_options();
        int selected = form.take_input();
        switch (selected) {
        case 1:
            selected = 2;
            break;
        case 2:
            selected = 3;
            break;
        case 3:
            log.level("How many variable do you need ? :");
            int x;
            cin >> x;
            selected = x;
            break;
        case -1:
            init();
            break;
        default:
            exit(0);
        }
        return selected;
    }
    double n_variable_arithmetic_operation(const int& variable_count, const string& operation) {
        vector<double> nums;
        for (int i = 0; i < variable_count; i++) {
            double x;
            // string aa = "[a" + to_string(i) + "]. ";
            cout << "[a" + to_string(i + 1) + "]. ";
            cin >> x;
            nums.push_back(x);
        }
        double result = nums[0];

        if (operation == "+") {
            for (int i = 1; i < variable_count; i++) {
                result += nums[i];
            }
        } else if (operation == "-") {
            for (int i = 1; i < variable_count; i++) {
                result -= nums[i];
            }
        } else if (operation == "*") {
            for (int i = 1; i < variable_count; i++) {
                result *= nums[i];
            }
        } else if (operation == "/") {
            for (int i = 1; i < variable_count; i++) {
                result /= nums[i];
            }
        }
        return result;
    }
    void Addition() {
        int    selected = get_variable_count();
        double result   = n_variable_arithmetic_operation(selected, "+");
        log.info("Addition result is completed ");
        log.level("Result : ");
        cout << result << endl;
    }
    void Subtraction() {
        int    selected = get_variable_count();
        double result   = n_variable_arithmetic_operation(selected, "-");
        log.info("Subtraction result is completed ");
        log.level("Result : ");
        cout << result << endl;
    }
    void Multiplication() {
        int    selected = get_variable_count();
        double result   = n_variable_arithmetic_operation(selected, "*");
        log.info("Multiplication result is completed ");
        log.level("Result : ");
        cout << result << endl;
    }
    void Division() {
        int    selected = get_variable_count();
        double result   = n_variable_arithmetic_operation(selected, "/");
        log.info("Division result is completed ");
        log.level("Result : ");
        cout << result << endl;
    }
    void arithmetic() {
        log.info("Arithmetic operations selected.");
        vector<string> opt = {"Addition [+]", "Subtraction [-]", "Multiplication [*]", "Division [/]"};
        Form           form(opt);
        form.print_options();
        int selected = form.take_input();
        switch (selected) {
        case 1:
            Addition();
            break;
        case 2:
            Subtraction();
            break;
        case 3:
            Multiplication();
            break;
        case 4:
            Division();
            break;
        case -1:
            // init();
            exit(0);
        default:
            log.error("Something went wrong");
        }
    }
};

// main body of init function
void init() {
    Calculator calc;
    calc.arithmetic();
}
int main() {
    init();
    return 0;
}
```

## output

![3](https://i.ibb.co/fd6TB2Ts/Screenshot-2025-06-06-152204.png)

## 4. check leap year

```cpp
#include <iostream>
using namespace std;

class Utils {
    int year;

  public:
    Utils(int& y) { year = y; }

  public:
    bool check_leap_year() {
        if (year % 400 == 0) {
            return true;
        } else if (year % 100 == 0) {
            return false;
        } else if (year % 4 == 0) {
            return true;
        } else {
            return false;
        }
    }

    void print_result() {
        // take_input();
        bool result = check_leap_year();
        if (result) {
            cout << year << " is a leap year" << endl;
        } else {
            cout << year << " is not a leap year" << endl;
        }
    }
};

int main() {
    int year;
    cout << "Enter a year : ";
    cin >> year;
    Utils u(year);
    u.print_result();
    return 0;
}

```

## output

![04](https://i.ibb.co/7tv7c3Pj/Screenshot-2025-06-06-152410.png)

## 05. positive , negative or zero

```cpp
#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter a number : ";
    cin >> num;
    cout << (num > 0 ? "Positive number" : (num == 0 ? "Number is zero" : "Negative number")) << endl;
    return 0;
}
```

## output

![05](https://i.ibb.co/ccjGt1bb/Screenshot-2025-06-06-152527.png)

## 06. check if a number is multiple of 3 and 05

```cpp
#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter a number : ";
    cin >> num;

    cout << ((num % 3 == 0 && num % 5 == 0) ? "The number is multiple of 3 and 5"
                                            : "The number is not multiple of 3 and 5")
         << endl;
    return 0;
}
```

## output

![06](https://i.ibb.co/zhzgDZ9L/Screenshot-2025-06-06-152655.png)

## 07. grade Calculator

```cpp
#include <iostream>
using namespace std;

class Worker {
    float number;

  public:
    void find_grade() {
        cout << "What is your number in a subject : ";
        cin >> number;
        if (number > 0 && number <= 100) {
            if (number >= 90) {
                cout << "You got A in this subject" << endl;
            } else if (number >= 80) {
                cout << "You got B in this subject" << endl;
            } else if (number >= 70) {
                cout << "You got C in this subject" << endl;
            } else if (number >= 60) {
                cout << "You got D in this subject" << endl;
            } else {
                cout << "You failed in this subject" << endl;
            }
        } else {
            cout << "Wrong input" << endl;
        }
    }
};

int main() {
    Worker core_utils;
    core_utils.find_grade();

    return 0;
}
```

## output

![07](https://i.ibb.co/LDbk3RkR/Screenshot-2025-06-06-152818.png)

## 08. age group classifier

```cpp
#include <iostream>
using namespace std;

int main() {
    int age;
    cout << "Enter your age : ";
    cin >> age;

    cout << (age > 0 ? (age >= 60                  ? "Senior"
                        : (age >= 20 || age <= 59) ? "Adult"
                        : (age >= 13 || age <= 19) ? "Teenager"
                        : (age < 13)               ? "Child"
                                                   : "")
                     : "Age must have to be greater than 0")
         << endl;
    return 0;
}
```

## output

![08](https://i.ibb.co/LdzpCN9N/Screenshot-2025-06-06-152925.png)

## 09. find the largest of three numbers

```cpp
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int         n = 3;
    vector<int> nums;
    for (int i = 0; i < n; i++) {
        int x;
        cout << "A" << i + 1 << " : ";
        cin >> x;
        nums.push_back(x);
    }

    // buble sorting
    for (int i = 0; i < n; i++) {
        for (int k = 0; k < n - i - 1; k++) {
            if (nums[k] < nums[k + 1]) {
                int a       = nums[k];
                int b       = nums[k + 1];
                nums[k]     = b;
                nums[k + 1] = a;
            }
        }
    }

    // for (int i = 0; i < n; i++) {
    //     cout << nums[i] << endl;
    // }
    cout << "The maximum number is : " << nums[0] << endl;
    return 0;
}
```

## output

![09](https://i.ibb.co/ZpsxVvZt/Screenshot-2025-06-06-153029.png)

## 10. vowel or consonent

```cpp
#include <iostream>
#include <vector>
using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;

int main() {
    char input_text;
    cout << "Enter a letter  : ";
    cin >> input_text;
    vector<char> vowels   = {'A', 'E', 'I', 'O', 'U', 'a', 'e', 'i', 'o', 'u'};
    bool         is_vowel = false;
    cout << "input is = " << input_text << endl;
    for (int k = 0; k < vowels.size(); k++) {
        if (input_text == vowels[k]) {
            is_vowel = true;
        }
    }

    cout << (is_vowel ? "The input is a vowel" : "The input is a consonent") << endl;

    return 0;
}
```

## output

![10](https://i.ibb.co/fY3qxnG5/Screenshot-2025-06-06-153155.png)
