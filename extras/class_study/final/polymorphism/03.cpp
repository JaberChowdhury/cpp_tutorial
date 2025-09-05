/*
Person Class with Name, Age, and Country

Write a C++ program to create a class called Person that has private
member variables for name, age and country. Implement member
functions to set and get the values of these variables.
 */

#include <iostream>
using namespace std;

class Person {
  private:
    string name, country;
    int    age;

  public:
    void set(string n, string c, int a) {
        name    = n;
        country = c;
        if (a > 0) {
            age = a;
        } else {
            age = 0;
        }
    }
    string getName() { return name; }
    int    getAge() { return age; }
    string getCountry() { return country; }
};
int main() {

    Person p;
    p.set("Jaber", "Bangladesh", 000);
    cout << "Name: " << p.getName() << endl;
    cout << "Age: " << p.getAge() << endl;
    cout << "Country: " << p.getCountry() << endl;

    return 0;
}
