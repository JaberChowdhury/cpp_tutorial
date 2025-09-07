#include <iostream>
#include <map>
#include <set>
using namespace std;

int main() {
    set<int> roll;
    roll.insert(102);
    roll.insert(101);
    roll.insert(105);
    roll.insert(103);
    roll.insert(101);

    map<int, string> students;
    students.insert({102, "Jaber"});
    students.insert({101, "Hasan"});
    students.insert({103, "Sumaya"});
    students.insert({105, "Mysha"});
    students.insert({101, "Hasan"});

    // display set
    for (auto d : roll) {
        cout << d << endl;
    }

    // display map
    for (auto d : students) {
        cout << "{ \"id\" : " << d.first << ", \"name\" : \"" << d.second << "\" }" << endl;
    }
    return 0;
}
