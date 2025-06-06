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
