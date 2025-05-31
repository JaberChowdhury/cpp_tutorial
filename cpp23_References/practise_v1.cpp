// reference in cpp
// reference is essentially syntaxtic sugar on top of pointer to make our life more easier.
#include <iostream>
using namespace std;

void increament_from_value(int value) {
    value++;
}

// Implementation of pointer and it's use
void increament_using_pointer(int* value) {
    cout << *value << endl;
    (*value)++;
}
// Implementation of reference and it's use
void increament_using_reference(int& value) {
    value++;
}
int main() {
    int  aa        = 90;
    int& ref_of_aa = aa;
    ref_of_aa      = 89;
    cout << aa << endl; // 89

    int a = 50;
    increament_from_value(a); // 50 not 51
    cout << "a = " << a << endl;

    // using pointer
    int b = 90;
    increament_using_pointer(&b);
    cout << "b = " << b << endl; // 91 not 90

    // using reference
    int c = 23;
    increament_using_reference(c);
    cout << "c = " << c << endl; // 24
    return 0;
}
