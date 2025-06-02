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

    void print_matrix(const vector<vector<double>>& matrix, const string& matrix_variable_symbol) {
        if (!matrix.empty()) {
            info("Printing matrix " + matrix_variable_symbol);
            int matrix_row = matrix.size(), matrix_column = matrix[0].size();
            for (int i = 0; i < matrix_row; i++) {
                cout << "[" << matrix_variable_symbol << i + 1 << "]  [ ";
                for (int k = 0; k < matrix_column; k++) {
                    level_blue(to_string(matrix[i][k]));
                    if (k != matrix[i].size() - 1) {
                        cout << " , ";
                    }
                }
                cout << " ]" << endl;
            }
            info("matrix size is : " + LEVEL_RED + to_string(matrix_column) + " X " + to_string(matrix_row) + RESET);
        } else {
            error("The vector is empty");
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
    vector<vector<double>> Add_two_matrix(const vector<vector<double>>& A, const vector<vector<double>>& B) {
        vector<vector<double>> result;
        int                    matrix_size = A[0].size();
        for (int i = 0; i < matrix_size; i++) {
            vector<double> x;
            for (int j = 0; j < matrix_size; j++) {
                double y = 0;
                y        = A[i][j] + B[i][j];
                x.push_back(y);
            }
            result.push_back(x);
        }
        return result;
    }
    vector<vector<double>> Substract_two_matrix(const vector<vector<double>>& A, const vector<vector<double>>& B) {
        vector<vector<double>> result;
        int                    matrix_size = A[0].size();
        for (int i = 0; i < matrix_size; i++) {
            vector<double> x;
            for (int j = 0; j < matrix_size; j++) {
                double y = 0;
                y        = A[i][j] - B[i][j];
                x.push_back(y);
            }
            result.push_back(x);
        }
        return result;
    }
    void Matrix_addiion_subtraction(const vector<vector<vector<double>>>& datas, const string& operation,
                                    const string& matrix_variable_symbol) {
        vector<vector<double>> result       = datas[0];
        int                    total_matrix = datas.size(), matrix_size = datas[0][0].size();
        for (int i = 1; i < total_matrix; i++) {
            if (operation == "+") {
                result = Add_two_matrix(result, datas[i]);
            } else if (operation == "-") {
                result = Substract_two_matrix(result, datas[i]);
            }
        }

        Logger l;
        l.print_matrix(result, matrix_variable_symbol);
    }
    // taking multiple matrix from user
    vector<vector<vector<double>>> take_matrix_input() {
        vector<vector<vector<double>>> inputs;
        int                            size = 0, number_of_matrix = 0;

        // Get matrix dimensions
        log.level("Enter the size of matrix eg.(1,2,3,4,..): ");
        cin >> size;

        // Get number of matrices
        log.level("How many matrices do you want? eg.(1,2,3,4,..): ");
        cin >> number_of_matrix;

        if (size > 0 && number_of_matrix > 0) {
            // Iterate through each matrix
            for (int m = 0; m < number_of_matrix; m++) {
                vector<vector<double>> current_matrix;
                log.info("Enter values for Matrix " + to_string(m + 1));

                // Get each row of the matrix
                for (int i = 0; i < size; i++) {
                    vector<double> row;
                    log.level("Enter " + to_string(size) + " values for row " + to_string(i + 1)
                              + " (separated by space): ");

                    // Get each column value
                    for (int j = 0; j < size; j++) {
                        double value;
                        cin >> value;
                        row.push_back(value);
                    }
                    current_matrix.push_back(row);
                }

                inputs.push_back(current_matrix);
                log.success("Matrix " + to_string(m + 1) + " input completed");

                // Print the entered matrix
                log.print_matrix(current_matrix, "M" + to_string(m + 1));
            }

        } else {
            log.error("Invalid input! Size and number of matrices must be greater than 0");
        }
        return inputs;
    }
    // taking multiple input from user
    void Matrix_addition() {
        log.info("For addition operation of matrix, each matrix should have a same size.");
        vector<vector<vector<double>>> user_input = take_matrix_input();
        // Perform addition using existing method
        Matrix_addiion_subtraction(user_input, "+", "Result");
    }
    void Matrix_subtraction() {
        log.info("For substraction operation of matrix, each matrix should have a same size.");
        vector<vector<vector<double>>> user_input = take_matrix_input();
        // Perform addition using existing method
        Matrix_addiion_subtraction(user_input, "-", "Result");
    }
    vector<vector<double>> Multiply_two_matrix(const vector<vector<double>>& A, const vector<vector<double>>& B) {
        int rows_A = A.size();
        int cols_A = A[0].size();
        int cols_B = B[0].size();

        vector<vector<double>> result(rows_A, vector<double>(cols_B, 0));

        for (int i = 0; i < rows_A; i++) {
            for (int j = 0; j < cols_B; j++) {
                for (int k = 0; k < cols_A; k++) {
                    result[i][j] += A[i][k] * B[k][j];
                }
            }
        }
        return result;
    }

    void Matrix_multiplication() {
        log.info("For multiplication operation of matrices:");
        log.info("Number of columns in each matrix must equal number of rows in the next matrix");

        // Get number of matrices
        log.level("How many matrices do you want to multiply? (2 or more): ");
        int num_matrices;
        cin >> num_matrices;

        if (num_matrices < 2) {
            log.error("Need at least 2 matrices for multiplication!");
            return;
        }

        vector<vector<vector<double>>> matrices;
        vector<pair<int, int>>         dimensions(num_matrices); // Store dimensions of each matrix

        // Get dimensions for all matrices
        for (int m = 0; m < num_matrices; m++) {
            log.level("Enter dimensions for matrix " + to_string(m + 1) + " (rows columns): ");
            cin >> dimensions[m].first >> dimensions[m].second;

            // Check compatibility with previous matrix
            if (m > 0 && dimensions[m - 1].second != dimensions[m].first) {
                log.error("Invalid dimensions! Columns of matrix " + to_string(m) + " must equal rows of matrix "
                          + to_string(m + 1));
                return;
            }
        }

        // Get all matrices
        for (int m = 0; m < num_matrices; m++) {
            vector<vector<double>> current_matrix;
            log.info("Enter values for Matrix " + to_string(m + 1));

            for (int i = 0; i < dimensions[m].first; i++) {
                vector<double> row;
                log.level("Enter " + to_string(dimensions[m].second) + " values for row " + to_string(i + 1)
                          + " (separated by space): ");
                for (int j = 0; j < dimensions[m].second; j++) {
                    double value;
                    cin >> value;
                    row.push_back(value);
                }
                current_matrix.push_back(row);
            }
            matrices.push_back(current_matrix);
            log.print_matrix(current_matrix, "M" + to_string(m + 1));
        }

        // Multiply all matrices
        vector<vector<double>> result = matrices[0];
        for (int i = 1; i < matrices.size(); i++) {
            result = Multiply_two_matrix(result, matrices[i]);
        }

        log.success("Matrix multiplication completed");
        log.print_matrix(result, "Result");
    }
    vector<vector<double>> GetIdentityMatrix(int size) {
        vector<vector<double>> identity(size, vector<double>(size, 0));
        for (int i = 0; i < size; i++) {
            identity[i][i] = 1;
        }
        return identity;
    }

    bool IsInvertible(const vector<vector<double>>& matrix) {
        // Check if matrix is square
        if (matrix.size() != matrix[0].size()) {
            return false;
        }

        // Simple determinant check for 2x2 matrix
        if (matrix.size() == 2) {
            double det = matrix[0][0] * matrix[1][1] - matrix[0][1] * matrix[1][0];
            return det != 0;
        }

        return true; // For larger matrices, we'll find out during computation
    }

    vector<vector<double>> GetMatrixInverse(vector<vector<double>> A) {
        int                    n         = A.size();
        vector<vector<double>> augmented = A;
        vector<vector<double>> identity  = GetIdentityMatrix(n);

        // Create augmented matrix [A|I]
        for (int i = 0; i < n; i++) {
            augmented[i].insert(augmented[i].end(), identity[i].begin(), identity[i].end());
        }

        // Gaussian elimination
        for (int i = 0; i < n; i++) {
            // Find pivot
            double pivot = augmented[i][i];
            if (pivot == 0) {
                return vector<vector<double>>(); // Matrix is not invertible
            }

            // Scale row to make pivot = 1
            for (int j = 0; j < 2 * n; j++) {
                augmented[i][j] /= pivot;
            }

            // Eliminate column
            for (int k = 0; k < n; k++) {
                if (k != i) {
                    double factor = augmented[k][i];
                    for (int j = 0; j < 2 * n; j++) {
                        augmented[k][j] -= factor * augmented[i][j];
                    }
                }
            }
        }

        // Extract inverse matrix from augmented matrix
        vector<vector<double>> inverse(n, vector<double>(n));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                inverse[i][j] = augmented[i][j + n];
            }
        }

        return inverse;
    }

    void Matrix_inverse() {
        log.info("For inverse operation of matrix:");
        log.info("Matrix must be square (same number of rows and columns)");

        // Get matrix dimensions
        log.level("Enter matrix size (N for NxN matrix): ");
        int size;
        cin >> size;

        if (size <= 0) {
            log.error("Invalid size! Matrix size must be greater than 0");
            return;
        }

        // Get matrix elements
        vector<vector<double>> matrix;
        log.info("Enter values for Matrix:");

        for (int i = 0; i < size; i++) {
            vector<double> row;
            log.level("Enter " + to_string(size) + " values for row " + to_string(i + 1) + " (separated by space): ");
            for (int j = 0; j < size; j++) {
                double value;
                cin >> value;
                row.push_back(value);
            }
            matrix.push_back(row);
        }

        // Print input matrix
        log.print_matrix(matrix, "A");

        // Check if matrix is invertible
        if (!IsInvertible(matrix)) {
            log.error("Matrix is not invertible!");
            return;
        }

        // Calculate inverse
        vector<vector<double>> inverse = GetMatrixInverse(matrix);

        if (inverse.empty()) {
            log.error("Matrix is not invertible! (Determinant is zero)");
            return;
        }

        log.success("Matrix inverse calculated successfully");
        log.print_matrix(inverse, "A^(-1)");
    }
    void Instruction_for_matrix() {
        Logger log;

        // Title
        log.info("=== Matrix Operations Instructions ===\n");

        // 1. Matrix Addition
        log.level_blue("\n1. Matrix Addition:\n");
        log.level("• Matrices must have the same dimensions (rows × columns)\n");
        log.level("• Elements are added position by position\n");
        log.level("Example:\n");
        log.level("  [1 2]   [5 6]   [6  8 ]\n");
        log.level("  [3 4] + [7 8] = [10 12]\n\n");

        // 2. Matrix Subtraction
        log.level_blue("\n2. Matrix Subtraction:\n");
        log.level("• Matrices must have the same dimensions (rows × columns)\n");
        log.level("• Elements are subtracted position by position\n");
        log.level("Example:\n");
        log.level("  [5 6]   [1 2]   [4 4]\n");
        log.level("  [7 8] - [3 4] = [4 4]\n\n");

        // 3. Matrix Multiplication
        log.level_blue("\n3. Matrix Multiplication:\n");
        log.level("• Number of columns in first matrix must equal number of rows in second matrix\n");
        log.level("• Result matrix dimensions: (rows of A × columns of B)\n");
        log.level("• Each element is sum of row×column products\n");
        log.level("Example:\n");
        log.level("  [1 2]   [5 6]   [19 22]\n");
        log.level("  [3 4] × [7 8] = [43 50]\n");
        log.level("\nCalculation:\n");
        log.level("  [1×5 + 2×7  1×6 + 2×8]\n");
        log.level("  [3×5 + 4×7  3×6 + 4×8]\n\n");

        // 4. Matrix Inverse
        log.level_blue("\n4. Matrix Inverse:\n");
        log.level("• Only square matrices can have inverses\n");
        log.level("• Matrix must be non-singular (determinant ≠ 0)\n");
        log.level("• A × A^(-1) = I (Identity Matrix)\n");
        log.level("Example:\n");
        log.level("  [4  7]     [ 0.6  -0.7]\n");
        log.level("  [2  6]  →  [-0.2   0.4]\n\n");

        // Input Guidelines
        log.level_blue("\nInput Guidelines:\n");
        log.level("1. For Addition/Subtraction:\n");
        log.level("   • Enter square matrix size (N×N)\n");
        log.level("   • Enter number of matrices\n");
        log.level("   • Input elements row by row\n\n");

        log.level("2. For Multiplication:\n");
        log.level("   • Enter number of matrices (≥2)\n");
        log.level("   • For each matrix, enter rows and columns\n");
        log.level("   • Input elements row by row\n\n");

        log.level("3. For Inverse:\n");
        log.level("   • Enter matrix size (N for N×N matrix)\n");
        log.level("   • Input elements row by row\n\n");

        // Press any key to continue
        log.info("Press Enter to return to matrix menu...");
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cin.get();
    }
    // Implement matrix operations logic here
    void matrix() {
        vector<string> opt = {"Matrix Addition", "Matrix Subtraction", "Matrix Multiplication", "Inverse Matrix",
                              "See Instruction"};
        Form           f(opt);
        f.print_options();
        int selected = f.take_input();

        switch (selected) {
        case 1:
            Matrix_addition();
            break;
        case 2:
            Matrix_subtraction();
            break;
        case 3:
            Matrix_multiplication();
            break;
        case 4:
            Matrix_inverse();
            break;
        case 5:
            Instruction_for_matrix();
            break;
        case -1:
            init();
            break;
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
