// https://judge.beecrowd.com/en/problems/view/1040

#include <iomanip>
#include <iostream>
using namespace std;

int main() {
    float n1, n2, n3, n4, n5;
    cin >> n1 >> n2 >> n3 >> n4;
    float average = float(n1 * 2 + n2 * 3 + n3 * 4 + n4 * 1) / (2 + 3 + 4 + 1), new_average;
    if (average >= 5.0 && average <= 6.9) {
        cin >> n5;
    }
    new_average = (average + n5) / 2;
    cout << "Media: " << fixed << setprecision(1) << average << endl;
    if (average >= 7.0) {
        cout << "Aluno aprovado." << endl;
    } else if (average < 5.0) {
        cout << "Aluno reprovado." << endl;
    } else if (average >= 5.0 && average <= 6.9) {
        cout << "Aluno em exame." << endl;
        cout << "Nota do exame: " << fixed << setprecision(1) << n5 << endl;
        if (new_average >= 5.0) {
            cout << "Aluno aprovado." << endl;
        } else {
            cout << "Aluno reprovado." << endl;
        }
        cout << "Media final: " << fixed << setprecision(1) << new_average << endl;
    }
    return 0;
}

// solved
