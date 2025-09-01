#include <iostream>
using namespace std;

class Student {
  public:
    string name;
    int    id;
    int    gpa;
    void   print() {
        cout << "Name : " << this->name << endl;
        cout << "Id : " << this->id << endl;
    }
};

class Hasan : public Student {};
class Jaber : public Student {};
class Mysha : public Student {};
class Sumaiya : public Student {};

class Batch70 : public Hasan, public Jaber, public Mysha, public Sumaiya {
  public:
    void batchinfo() {
        this-> 
    }
};
int main() {

    return 0;
}