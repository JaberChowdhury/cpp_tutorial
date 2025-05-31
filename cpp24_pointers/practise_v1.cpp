#include <cstring>
#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> nums;
    for (int i = 0; i < 89; i++) {
        double* ptr = (double*) &i;
        nums.push_back(i);
        cout << "i = " << i << " ptr = " << ptr << endl;
    }

    for (int i = 0; i < 89; i++) {
        void* ptr = &nums[i];
        cout << "nums[i] = " << nums[i] << "; ptr = " << ptr << endl;
    }

    // All these time we created pointer from a variable and by doing that we can see that where our variable is stored
    // but now we will see how to access our data from a pointer.

    int  w = 9078;
    int* v = &w;
    *v     = 999999;
    cout << w << endl; // the ans is 999999 not 9078

    // they are not same
    cout << "&v = " << &v << "; &w = " << &w << endl;
    cout << "*v = " << *v << endl;
    char* buffer = new char[9];
    memset(buffer, 0, 9);

    char** double_ptr = &buffer; // pointer of the pointer
    cout << "char** double_ptr = " << double_ptr << endl;

    delete[] buffer;
    return 0;
}
