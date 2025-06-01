#include <cstdlib> // for exit()
#include <iostream>
#include <limits> // for numeric_limits
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
    const string SUCCESS_LBL = "\033[30;46m"; // Cyan background, black text
    const string SUCCESS_MSG = "\033[36m";    // Cyan text

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
        // Always display success messages regardless of log level
        cout << SUCCESS_LBL << "[SUCCESS]" << RESET << " : " << SUCCESS_MSG << msg << RESET << endl;
    }

    void level(const string& msg) { cout << INFO_MSG << msg << RESET; }

    void print_options(const vector<string>& datas) {
        cout << INFO_MSG << "Select any one option from 1 to " << datas.size() << " : " << RESET << endl;
        for (int i = 0; i < datas.size(); i++) {
            cout << INFO_LBL << "[" << i + 1 << "]" << RESET << "." << " " << datas[i] << endl;
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
        cout << "\033[2J\033[1;1H"; // clear the terminal every time before rendering the options
        Logger log;
        log.print_options(options);
    }

    int take_input() {
        Logger log;
        while (true) {
            log.level("Select one option: ");
            cin >> selected_option;

            if (cin.fail() || selected_option < 1 || selected_option > vector_length) {
                log.warn("Invalid input! Try again.");
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
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
    // Implement BMI calculation logic here
    void bmi() {
        float height, weight, bmi;

        log.level("Enter your height in meter unit : ");
        cin >> height;
        log.level("Enter your weight in kg unit : ");
        cin >> weight;

        bmi = weight / (height * height);

        log.success("Your BMI is calculated");
        log.info("BMI = " + to_string(bmi));

        // Summary based on BMI
        if (bmi < 18.5) {
            log.warn("You are underweight.");
            log.level("Consider a balanced diet with more calories and consult a "
                      "nutritionist if needed.");
        } else if (bmi >= 18.5 && bmi < 24.9) {
            log.success("You have a normal weight.");
            log.level("Maintain your current lifestyle with regular exercise and a healthy "
                      "diet.");
        } else if (bmi >= 25 && bmi < 29.9) {
            log.warn("You are overweight.");
            log.level("Include more physical activity and monitor your diet to return to a "
                      "healthy range.");
        } else {
            log.error("You are in the obese range.");
            log.level("Consult a doctor or a dietitian for a personalized weight loss "
                      "plan.");
        }
    }

    // Implement BMR calculation logic here
    void bmr() {
        string gender;
        float  weight, height, bmr;
        int    age;
        log.warn("Enter your gender (male/female) : ");
        vector<string> gender_opt = {"male", "female"};
        Form           f(gender_opt);
        f.print_options();
        int selected = f.take_input();
        switch (selected) {
        case 1:
            gender = "male";
            break;
        case 2:
            gender = "female";
            break;
        case -1:
            init();
            break;
        default:
            break;
        }

        log.level("Enter your weight in kg : ");
        cin >> weight;

        log.level("Enter your height in cm : ");
        cin >> height;

        log.level("Enter your age in years : ");
        cin >> age;

        if (gender == "male") {
            bmr = 10 * weight + 6.25 * height - 5 * age + 5;
        } else if (gender == "female") {
            bmr = 10 * weight + 6.25 * height - 5 * age - 161;
        } else {
            log.error("Invalid gender input.");
            return;
        }

        log.info("Your BMR is calculated.");
        log.info("BMR = " + to_string(bmr) + " calories/day");

        // Provide lifestyle suggestions based on BMR

        log.level("Choose your activity level:\n");
        vector<string> options = {"Sedentary (little or no exercise)", "Lightly active (light exercise 1–3 days/week)",
                                  "Moderately active (moderate exercise 3–5 days/week)",
                                  "Very active (hard exercise 6–7 days/week)",
                                  "Extra active (very intense or physical job)"};
        Form           ff(options);
        ff.print_options();
        int   choice     = ff.take_input();
        float multiplier = 1.2;
        switch (choice) {
        case 1:
            multiplier = 1.2;
            break;
        case 2:
            multiplier = 1.375;
            break;
        case 3:
            multiplier = 1.55;
            break;
        case 4:
            multiplier = 1.725;
            break;
        case 5:
            multiplier = 1.9;
            break;
        case -1:
            init();
            break;
        default:
            log.warn("Invalid choice. Assuming sedentary lifestyle.");
            break;
        }

        float daily_calories = bmr * multiplier;

        log.success("Estimated daily calorie need based on your activity level:");
        log.info("Maintenance Calories = " + to_string(daily_calories) + " calories/day");

        log.level("To lose weight: Consume ~" + to_string(daily_calories - 500) + " calories/day\n");
        log.level("To gain weight: Consume ~" + to_string(daily_calories + 500) + " calories/day\n");
    }

    void matrix() {
        log.info("Matrix operations selected.");
        // Implement matrix operations logic here
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
            init();
            break;
        default:
            log.error("Something went wrong");
        }
    }
};

// main body of init function
void init() {
    vector<string> main_menu = {"bmi", "bmr", "matrix", "arithmetic"};
    Form           form(main_menu);
    Calculator     calc;

    form.print_options();
    int selected = form.take_input();

    switch (selected) {
    case 1:
        calc.bmi();
        break;
    case 2:
        calc.bmr();
        break;
    case 3:
        calc.matrix();
        break;
    case 4:
        calc.arithmetic();
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
