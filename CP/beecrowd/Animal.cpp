// https://judge.beecrowd.com/en/problems/view/1049

#include <array>
#include <iostream>
using namespace std;

bool find_animal(const string& word, const array<string, 2>& array) {
    if (array[0] == word || array[1] == word) {
        return true;
    }
    return false;
}

int main() {
    // string a1[] = {"vertebrado", "ave", "carnivoro"};
    // string a2[] = {"vertebrado", "ave", "onivoro"};
    // string a3[] = {"vertebrado", "mamifero", "onivoro"};
    // string a4[] = {"vertebrado", "mamifero", "hervibara"};
    // string a5[] = {"invertebrado", "inseto", "hematofago"};
    // string a6[] = {"invertebrado", "inseto", "herbivoro"};
    // string a7[] = {"invertebrado", "anelideo", "hematofago"};
    // string a8[] = {"invertebrado", "anelideo", "onivoro"};
    array<string, 2>           a1  = {"ave", "carnivoro"};
    array<string, 2>           a2  = {"ave", "onivoro"};
    array<string, 2>           a3  = {"mamifero", "onivoro"};
    array<string, 2>           a4  = {"mamifero", "herbivoro"};
    array<array<string, 2>, 4> a10 = {a1, a2, a3, a4};
    array<string, 2>           a5  = {"inseto", "hematofago"};
    array<string, 2>           a6  = {"inseto", "herbivoro"};
    array<string, 2>           a7  = {"anelideo", "hematofago"};
    array<string, 2>           a8  = {"anelideo", "onivoro"};
    array<array<string, 2>, 4> b10 = {a5, a6, a7, a8};
    string                     b[] = {"aguia", "pomba", "homem", "vaca", "pulga", "lagarta", "sanguessuga", "minhoca"};
    string                     x, y, z;
    cin >> x;
    cin >> y;
    cin >> z;
    string s1 = "vertebrado";
    string s2 = "invertebrado";

    if (x == s1 || y == s1 || z == s1) {
        for (int i = 0; i < 4; i++) {
            if (find_animal(y, a10[i]) && find_animal(z, a10[i])) {
                cout << b[i] << endl;
                break;
            }
        }
    } else if (x == s2 || y == s2 || z == s2) {
        for (int i = 0; i < 4; i++) {
            if (find_animal(y, b10[i]) && find_animal(z, b10[i])) {
                cout << b[i + 4] << endl;
                break;
            }
        }
    }

    return 0;
}

// solved
