#include <iostream>
#include <string>
using namespace std;

int main() {
    class Student {
        string f_name  = "fname";
        string l_name  = "lname";
        int    id      = 0;
        double average = 0.0;

      public:
        Student() {}

        Student(string f_name, string l_name, int id, double average)
            : f_name(f_name)
            , l_name(l_name)
            , id(id)
            , average(average) {}

        string get_f_name() const { return f_name; }

        string get_l_name() const { return l_name; }

        int get_id() const { return id; }

        double get_average() const { return average; }
    };

    Student s1("John", "Doe", 123234, 86557.98768);

    cout << "First Name: " << s1.get_f_name() << endl;
    cout << "Last Name: " << s1.get_l_name() << endl;
    cout << "ID: " << s1.get_id() << endl;
    cout << "Average: " << s1.get_average() << endl;

    return 0;
}
