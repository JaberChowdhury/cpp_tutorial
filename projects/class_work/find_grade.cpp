#include <iostream>
using namespace std;

class Worker {
    float number;

  public:
    void find_grade() {
        cout << "What is your number in a subject : ";
        cin >> number;
        if (number > 0 && number <= 100) {
            if (number >= 80) {
                cout << "You got A+ in this subject" << endl;
            } else if (number >= 70) {
                cout << "You got A in this subject" << endl;
            } else if (number >= 60) {
                cout << "You got A- in this subject" << endl;
            } else if (number >= 50) {
                cout << "You got B in this subject" << endl;
            } else if (number >= 45) {
                cout << "You got C in this subject" << endl;
            } else if (number >= 40) {
                cout << "You got D in this subject" << endl;
            } else {
                cout << "You failed in this subject" << endl;
            }
        } else {
            cout << "Wrong input" << endl;
        }
    }
};

int main() {
    Worker core_utils;
    core_utils.find_grade();

    return 0;
}
