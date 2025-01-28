#include <iostream>
#include <string>
using namespace std;

int main()
{
    string array_of_names[10] = {"John", "Doe", "Jane", "Doe", "Alice", "Bob", "Charlie", "David", "Eve", "Frank"};
    for (int i = 0; i < sizeof(array_of_names) / sizeof(array_of_names[0]); i++)
    {
        cout << i + 1 << "   --   " << array_of_names[i] << endl;
    }
    return 0;
}