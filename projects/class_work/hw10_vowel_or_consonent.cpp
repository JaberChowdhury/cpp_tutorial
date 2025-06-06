#include <iostream>
#include <vector>
using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;

int main() {
    char input_text;
    cout << "Enter a letter  : ";
    cin >> input_text;
    vector<char> vowels   = {'A', 'E', 'I', 'O', 'U', 'a', 'e', 'i', 'o', 'u'};
    bool         is_vowel = false;
    cout << "input is = " << input_text << endl;
    for (int k = 0; k < vowels.size(); k++) {
        if (input_text == vowels[k]) {
            is_vowel = true;
        }
    }

    cout << (is_vowel ? "The input is a vowel" : "The input is a consonent") << endl;

    return 0;
}
