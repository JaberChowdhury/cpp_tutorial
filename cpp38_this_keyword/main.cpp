#include <iostream>
using namespace std;
class Person {
  public:
    string name;
    string location;
    Person(string name, string location) {
        // we can use this keyword in two different way
        this->name       = name;
        (*this).location = location;
    }
    void print_data() {
        cout << "Name : " << name << endl;
        cout << "Location : " << location << endl;
    }
};

int main() {
    Person Jaber("Jaber", "Bangladesh");
    Jaber.print_data();
    return 0;
}
