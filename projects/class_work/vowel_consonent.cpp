#include <iostream>
#include <vector>
using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;

int main() {
    string input_text;
    cout << "Enter a text  : ";
    cin >> input_text;
    vector<char> vowels       = {'A', 'E', 'I', 'O', 'U', 'a', 'e', 'o', 'u'};
    int          total_vowels = 0;

    for (int i = 0; i < input_text.size(); i++) {
        for (int k = 0; k < vowels.size(); k++) {
            if (input_text[i] == vowels[k]) {
                total_vowels += 1;
            }
        }
    }
    cout << "total_vowels = " << total_vowels << endl;
    cout << "total_consonents = " << input_text.size() - total_vowels << endl;
    return 0;
}
