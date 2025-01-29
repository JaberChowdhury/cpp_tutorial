#include <iostream>
#include <string>
using namespace std;

int main()
{
    // string students[5] = {"John", "Jane", "Jack", "Jill", "Joe"};
    // string &passed_students = students;
    string student = "John";
    string &passed_student = student;
    cout << "student : " << student << endl;
    cout << "passed students : " << passed_student << endl;
    return 0;
}