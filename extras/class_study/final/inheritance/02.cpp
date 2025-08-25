// Write a C++ Program for Enter Patient details using Inheritance.

#include <iostream>
using namespace std;

class Patient {
  public:
    string name, id, admit_date;
    int    age;
    Patient(string name, string id, string admit_date, int age) {
        this->name       = name;
        this->id         = id;
        this->admit_date = admit_date;
        this->age        = age;
    }
    void print_info() {
        cout << "Patient's name : " << name << "\n";
        cout << "Patient's id : " << id << "\n";
        cout << "Patient's admit_date : " << admit_date << "\n";
        cout << "Patient's age : " << age << "\n";
    }
};

int main() {
    int limit = 0;
    cout << "how many patient do you want to admit ? :: ";
    cin >> limit;
    Patient* patients[limit];

    for (int i = 0; i < limit; i++) {
        string name, id, admit_date;
        int    age;
        cout << "\nEnter details of patient " << i + 1 << ":\n";
        cout << "Name: ";
        cin >> name;
        cout << "ID: ";
        cin >> id;
        cout << "Admit Date: ";
        cin >> admit_date;
        cout << "Age: ";
        cin >> age;
        patients[i] = new Patient(name, id, admit_date, age);
    }

    // print the data
    for (int i = 0; i < limit; i++) {
    }
    return 0;
}
