#include <iostream>
#include <string>
#include <vector>

using namespace std;
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
int main() {
    Logger l;

    vector<vector<vector<double>>> x = {
        {
            {12, 12, 12},
            {12, 12.987, 12},
            {12, 12, 12},
        },
        {
            {12, 12, 12},
            {12, 12, 12},
            {12, 12, 12},
        },
        {
            {12, 12, 12},
            {12, 12, 12},
            {12, 12, 12},
        },
    };
    vector<string>         alphe  = {"A", "B", "C", "D", "E"};
    vector<vector<double>> matrix = x[0];

    for (int i = 1; i < x.size(); i++) {
        matrix = Add_two_matrix(matrix, x[i]);
    }

    l.print_matrix(matrix, "A");
    return 0;
}
