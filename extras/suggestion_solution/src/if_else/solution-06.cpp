#include <iostream>
using namespace std;

int main() {
    float marks;
    cin >> marks;
    if (marks >= 80)
        cout << "A+" << endl;
    else if (marks >= 70)
        cout << "A" << endl;
    else if (marks >= 60)
        cout << "B" << endl;
    else if (marks >= 50)
        cout << "C" << endl;
    else if (marks >= 40)
        cout << "D" << endl;
    else
        cout << "F" << endl;
    return 0;
}
