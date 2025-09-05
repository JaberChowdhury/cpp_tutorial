/*
Car Class with Company, Model, and Year

Write a C++ program to create a class called Car that has private
member variables for company, model, and year. Implement member
functions to get and set these variables.
 */

#include <cuchar>
#include <iostream>
using namespace std;

class Car {

  private:
    string company, model;
    int    year;

  public:
    void set(string c, string m, int y) {
        company = c;
        model   = m;
        if (y > 0) {
            year = y;
        } else {
            year = 0;
        }
    }
    string getCompany() { return company; }
    string getModel() { return model; }
    int    getYear() { return year; }
};

int main() {
    Car car1;
    car1.set("Bmw", "Wth", 2023);

    cout << "Company name :: " << car1.getCompany() << endl;
    cout << "Model name :: " << car1.getModel() << endl;
    cout << "Releas year :: " << car1.getYear() << endl;
    return 0;
}
