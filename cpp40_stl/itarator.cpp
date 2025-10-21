#include <iostream>
#include <vector>
using namespace std;
// int main() {
//     // Create a vector called cars that will store strings
//     vector<string> cars = {"Volvo", "BMW", "Ford", "Mazda"};

//     // Create an iterator named it
//     vector<string>::iterator it;

//     // Use the iterator to loop through the vector
//     for (it = cars.begin(); it != cars.end(); ++it) {
//         string& val = *it;
//         cout << val << "\n";
//     }
//     return 0;
// }

int main() {
    vector<int> nums = {21, 23, 345, 543, 465, 576, 78, 432, 1, 223, 45, 574, 768, 534, 3, 4435, 57};

    vector<int>::iterator it;

    for (auto it = nums.begin(); it < nums.end(); it++) {
        cout << *it << " ";
    }
    return 0;
}
