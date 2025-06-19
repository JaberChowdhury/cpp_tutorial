#include <iostream>
#include <string>

using namespace std;

int main() {
    string temp;
    int    d1, h1, m1, s1;
    int    d2, h2, m2, s2;

    // Reading start date
    cin >> temp >> d1;
    // Reading start time
    cin >> h1 >> temp >> m1 >> temp >> s1;

    // Reading end date
    cin >> temp >> d2;
    // Reading end time
    cin >> h2 >> temp >> m2 >> temp >> s2;

    // Convert start and end time to total seconds
    int startSeconds = d1 * 86400 + h1 * 3600 + m1 * 60 + s1;
    int endSeconds   = d2 * 86400 + h2 * 3600 + m2 * 60 + s2;

    int duration = endSeconds - startSeconds;

    int days = duration / 86400;
    duration %= 86400;
    int hours = duration / 3600;
    duration %= 3600;
    int minutes = duration / 60;
    int seconds = duration % 60;

    cout << days << " dia(s)" << endl;
    cout << hours << " hora(s)" << endl;
    cout << minutes << " minuto(s)" << endl;
    cout << seconds << " segundo(s)" << endl;

    return 0;
}
