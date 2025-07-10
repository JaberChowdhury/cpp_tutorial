#include <iostream>
using namespace std;

// int main() {
//     char vowels[10] = {'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};
//     char letter;
//     cin >> letter;
//     bool isVowel = false;
//     for (int i = 0; i < 10; i++) {
//         if (letter == vowels[i]) {
//             cout << "Its a vowel" << endl;
//             isVowel = true;
//             break;
//         }
//     }
//     if (!isVowel) {
//         cout << "Its a consonant" << endl;
//     }
//     return 0;
// }

// another solution
int main() {
    string vowels = "aeiouAEIOU";
    char   letter;
    cin >> letter;
    bool isVowel = false;
    for (int i = 0; i < 10; i++) {
        if (letter == vowels[i]) {
            cout << "Its a vowel" << endl;
            isVowel = true;
            break;
        }
    }
    if (!isVowel) {
        cout << "Its a consonant" << endl;
    }
    return 0;
}
