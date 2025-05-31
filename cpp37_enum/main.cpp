#include <iostream>
using namespace std;

enum Example { A = 90, B = 78, C = 88 };

enum log_level : int { info, warn, error };

int main() {
    Example   x = C;     // the value of x can be either A or B or C .
    log_level a = info;  // the value of a can be either info or warn or error .
    log_level b = warn;  // the value of b can be either info or warn or error .
    log_level c = error; // the value of c can be either info or warn or error .

    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    cout << "c = " << c << endl;
    cout << "x = " << x << endl;

    return 0;
}
