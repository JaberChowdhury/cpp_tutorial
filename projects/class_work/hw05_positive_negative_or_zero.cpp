#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter a number : ";
    cin >> num;
    cout << (num > 0 ? "Positive number" : (num == 0 ? "Number is zero" : "Negative number")) << endl;
    return 0;
}
