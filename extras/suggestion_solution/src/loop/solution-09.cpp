#include <iostream>
using namespace std;

int main() {
    string text = "jaber", rev_text = "";
    cin >> text;

    for (int i = text.size() - 1; i >= 0; i--) {
        rev_text += text[i];
    }
    if (rev_text == text) {
        cout << "The text is a palindrome" << endl;
    } else {
        cout << "The text is not a palindrome" << endl;
    }
    return 0;
}
