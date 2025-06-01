#include <iomanip>
#include <iostream>
using namespace std;

// Helper to print a color sample
void print_color_sample(const string& label, int code, const string& type) {
    string esc = "\033[" + to_string(code) + "m";
    cout << setw(10) << left << ("[" + to_string(code) + "]") << esc << label << "\033[0m" << "  ";
}

int main() {
    cout << "=== ANSI Foreground Colors ===\n\n";

    cout << "Standard Colors:\n";
    for (int i = 30; i <= 37; i++) {
        print_color_sample("Text", i, "fg");
        if ((i - 29) % 4 == 0)
            cout << endl; // New row every 4 items
    }
    cout << "\n\nBright Colors:\n";
    for (int i = 90; i <= 97; i++) {
        print_color_sample("Text", i, "fg");
        if ((i - 89) % 4 == 0)
            cout << endl;
    }

    cout << "\n\n=== ANSI Background Colors ===\n\n";

    cout << "Standard Colors:\n";
    for (int i = 40; i <= 47; i++) {
        print_color_sample("BG", i, "bg");
        if ((i - 39) % 4 == 0)
            cout << endl;
    }

    cout << "\n\nBright Colors:\n";
    for (int i = 100; i <= 107; i++) {
        print_color_sample("BG", i, "bg");
        if ((i - 99) % 4 == 0)
            cout << endl;
    }

    cout << "\n\n=== Mixed Preview ===\n\n";
    for (int fg = 30; fg <= 37; fg++) {
        for (int bg = 40; bg <= 47; bg++) {
            cout << "\033[" << fg << ";" << bg << "m"
                 << "[F" << fg << ",B" << bg << "]"
                 << "\033[0m ";
        }
        cout << endl;
    }

    return 0;
}
