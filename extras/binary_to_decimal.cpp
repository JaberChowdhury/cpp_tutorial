#include <iostream>
#include <stdint.h>
using namespace std;

int main() {
    int64_t binary = 10;

    int64_t decimal = 0;
    int64_t power   = 1;

    while (binary > 0) {
        int64_t digit = binary % 10;
        decimal += digit * power;
        binary /= 10;
        power *= 2;
    }

    cout << "Decimal: " << decimal << endl;

    return 0;
}
