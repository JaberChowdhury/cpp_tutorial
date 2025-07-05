#include <iostream>
using namespace std;

// int main() {
//     static const int limit = 10;
//     int              arr[limit];
//     for (int i = 0; i < limit; i++) {
//         cout << "Enter element " << i << ": ";
//         cin >> arr[i];
//     }
//     for (int i = 0; i < limit; i++) {
//         cout << "arr[" << i << "] = " << arr[i] << endl;
//     }
//     return 0;
// }
int main() {
    int limit, search_item;
    cout << "Enter the limit : ";
    cin >> limit;
    int arr[limit];
    for (int i = 0; i < limit; i++) {
        cout << "Enter element " << i << ": ";
        cin >> arr[i];
    }
    cout << "What item u want to search : ";
    cin >> search_item;
    for (int i = 0; i < limit; i++) {
        if (arr[i] == search_item) {
            cout << "Item is found" << endl;
            break;
        } else {
            cout << "Item not found " << endl;
        }
    }
    return 0;
}
