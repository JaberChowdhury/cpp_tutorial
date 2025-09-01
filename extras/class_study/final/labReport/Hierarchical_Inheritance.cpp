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
class Sifat : public Student {};
class Masum : public Student {};
int main() {
    Hasan hm;
    hm.name = "Hasan Mahmud";
    hm.id   = 6;
    hm.gpa  = 4;
    hm.print();

    Sifat si;
    si.name = "Sifatul Islam";
    si.id   = 90;
    si.gpa  = 4;
    si.print();

    Masum mb;
    mb.name = "Masum Billah";
    mb.id   = 89;
    mb.gpa  = 3;
    mb.print();
    return 0;
}

/*
Hierarchical inheritance : in Hierarchical inheritance more than one sub class is inheritad from one base class
*/