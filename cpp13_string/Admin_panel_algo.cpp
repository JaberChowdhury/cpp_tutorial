#include <iostream>
using namespace std;

void login() {
    string name, password;
    string de_name = "admin", de_password = "admin";

    cout << "Enter your name: ";
    cin >> name;
    cout << "Enter your password: ";
    cin >> password;

    if (name == de_name && password == de_password) {
        cout << "Welcome to the admin panel!" << endl;
        cout << "You have access to the admin panel." << endl;
    } else {
        if (name != de_name && password != de_password) {
            cout << "Invalid name and password." << endl;
        } else if (name != de_name) {
            cout << "Invalid name." << endl;
        } else {
            cout << "Invalid password." << endl;
        }
        cout << "Access denied!" << endl;

        // Ask if the user wants to try again
        char choice;
        cout << "Do you want to try again? (y/n): ";
        cin >> choice;
        if (choice == 'y' || choice == 'Y') {
            login(); // Recursive call to try again
        } else {
            cout << "Exiting..." << endl;
        }
    }
}

int main() {
    login(); // Initial call to the login function
    return 0;
}
