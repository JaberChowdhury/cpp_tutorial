#include <cmath>   // for math operation
#include <cstdlib> // for exit()
#include <iostream>
// #include <limits> // for numeric_limits
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
                log.info("Exiting program...");
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
    Logger logger;

  public:
    void boolean_and() {
        double x, y;
        logger.level_blue("Enter a numeric value for x :");
        cin >> x;
        logger.level_blue("Enter a numeric value for y :");
        cin >> y;
        bool result = x && y;
        cout << x << " && " << y << " = ";
        logger.level_red(((result == true) ? "true" : "false"));
        cout << endl;
    }
    void boolean_or() {
        double x, y;
        logger.level_blue("Enter a numeric value for x :");
        cin >> x;
        logger.level_blue("Enter a numeric value for y :");
        cin >> y;
        bool result = x || y;
        cout << x << " || " << y << " = ";
        logger.level_red(((result == true) ? "true" : "false"));
        cout << endl;
    }
    void boolean_not() {
        double x, y;
        logger.level_blue("Enter a numeric value for x :");
        cin >> x;
        logger.level_blue("Enter a numeric value for y :");
        cin >> y;
        bool result = x != y;
        cout << x << " != " << y << " = ";
        logger.level_red(((result == true) ? "true" : "false"));
        cout << endl;
    }
    void boolean() {
        vector<string> opt = {"AND Operator", "OR Operator", "NOT Operator"};
        Form           form(opt);

        form.print_options();
        int selected = form.take_input();
        switch (selected) {
        case 1:
            boolean_and();
            break;
        case 2:
            boolean_or();
            break;
        case 3:
            boolean_not();
            break;
        case -1:
            init();
        default:
            break;
        }
    }
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
            logger.level("How many variable do you need ? :");
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
        logger.info("Addition result is completed ");
        logger.level("Result : ");
        cout << result << endl;
    }
    void Subtraction() {
        int    selected = get_variable_count();
        double result   = n_variable_arithmetic_operation(selected, "-");
        logger.info("Subtraction result is completed ");
        logger.level("Result : ");
        cout << result << endl;
    }
    void Multiplication() {
        int    selected = get_variable_count();
        double result   = n_variable_arithmetic_operation(selected, "*");
        logger.info("Multiplication result is completed ");
        logger.level("Result : ");
        cout << result << endl;
    }
    void Division() {
        int    selected = get_variable_count();
        double result   = n_variable_arithmetic_operation(selected, "/");
        logger.info("Division result is completed ");
        logger.level("Result : ");
        cout << result << endl;
    }
    void arithmetic() {
        logger.info("Arithmetic operations selected.");
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
            init();
            break;
        default:
            logger.error("Something went wrong");
        }
    }
    void handle_trigonometry(double (*func)(double)) {
        std::cout << "Please enter a numerical value (degrees): ";
        double x;
        std::cin >> x;

        // Convert degrees to radians
        const double PI      = 3.14159265358979323846;
        double       radians = x * PI / 180.0;

        double result = func(radians);
        std::cout << "Result: " << result << std::endl;
    }

    static double csc(double x) { return 1 / sin(x); }
    static double sec(double x) { return 1 / cos(x); }
    static double cot(double x) { return 1 / tan(x); }
    static double acsc(double x) { return 1 / asin(x); }
    static double asec(double x) { return 1 / acos(x); }
    static double acot(double x) { return 1 / atan(x); }
    void          trigonometry() {
        vector<string> opt = {// Trigonometric
                              "sin(x)", "cos(x)", "tan(x)", "csc(x)", "sec(x)", "cot(x)",

                              // Inverse Trigonometric
                              "asin(x) -> [inverse]", "acos(x) -> [inverse]", "atan(x) -> [inverse]",
                              "acsc(x) -> [inverse]", "asec(x) -> [inverse]", "acot(x) -> [inverse]",

                              // Hyperbolic
                              "sinh(x) -> [Hyperbolic]", "cosh(x) -> [Hyperbolic]", "tanh(x) -> [Hyperbolic]",

                              // Inverse Hyperbolic
                              "asinh(x)", "acosh(x)", "atanh(x)"};
        Form           f(opt);
        f.print_options();
        int selected = f.take_input();

        Logger log;
        double ans;

        switch (selected) {
        case 1:
            handle_trigonometry(sin);
            break;
        case 2:
            handle_trigonometry(cos);
            break;
        case 3:
            handle_trigonometry(tan);
            break;
        case 4:
            handle_trigonometry(csc);
            break;
        case 5:
            handle_trigonometry(sec);
            break;
        case 6:
            handle_trigonometry(cot);
            break;
        case 7:
            handle_trigonometry(asin);
            break;
        case 8:
            handle_trigonometry(acos);
            break;
        case 9:
            handle_trigonometry(atan);
            break;
        case 10:
            handle_trigonometry(acsc);
            break;
        case 11:
            handle_trigonometry(asec);
            break;
        case 12:
            handle_trigonometry(acot);
            break;
        case 13:
            handle_trigonometry(sinh);
            break;
        case 14:
            handle_trigonometry(cosh);
            break;
        case 15:
            handle_trigonometry(tanh);
            break;
        case 16:
            handle_trigonometry(asinh);
            break;
        case 17:
            handle_trigonometry(acosh);
            break;
        case 18:
            handle_trigonometry(atanh);
            break;
        case -1:
            init();
            break;
        default:
            break;
        }
    }
    void logarithm() {
        logger.level("Please enter a numerical value : ");
        double x, ans;
        cin >> x;
        ans = log(x);
        cout << "Ans : " << ans << endl;
    }
    void power_function() {
        logger.level("Please enter the base value : ");
        double base;
        cin >> base;
        logger.level("Please enter the power value : ");
        double power;
        cin >> power;
        double ans = pow(base, power);
        cout << "Ans : " << ans << endl;
    }
    void root_over() {
        logger.level("Please enter the base value : ");
        double base;
        cin >> base;
        logger.level("Please enter the power value : ");
        double power;
        cin >> power;
        double ans = pow(base, 1.0 / power);
        cout << "Ans : " << ans << endl;
    }
};

// main body of init function
void init() {
    vector<string> main_menu = {"Logical Operation", "Arithmetic",     "Trigonometry",
                                "Logarithm",         "Power function", "Root Over"};
    Form           form(main_menu);
    Calculator     calc;

    form.print_options();
    int selected = form.take_input();

    switch (selected) {
    case 1:
        calc.boolean();
        break;
    case 2:
        calc.arithmetic();
        break;
    case 3:
        calc.trigonometry();
        break;
    case 4:
        calc.logarithm();
        break;
    case 5:
        calc.power_function();
        break;
    case 6:
        calc.root_over();
        break;
    case -1:
        exit(0);
    default:
        break;
    }
}
int main() {
    init();
    return 0;
}
