// https://judge.beecrowd.com/en/problems/view/1023

// #include <cmath>
// #include <iomanip>
// #include <iostream>
// #include <string>
// #include <vector>
// using namespace std;

// void bubble_sort(vector<vector<int>>& data) {
//     for (int i = 0; i < data.size(); i++) {
//         for (int j = 0; j < data.size() - i - 1; j++) {
//             if (data[j][1] / data[j][0] > data[j + 1][1] / data[j + 1][0]) {
//                 swap(data[j], data[j + 1]);
//             }
//         }
//     }
// }

// int main() {
//     vector<float>  average_consumptions;
//     vector<string> average_strings;
//     int            case_num = 1;

//     while (true) {
//         int n;
//         cin >> n;
//         if (n == 0)
//             break;

//         vector<vector<int>> data;
//         int                 total_people = 0, total_consumption = 0;

//         for (int i = 0; i < n; ++i) {
//             int people, consumption;
//             cin >> people >> consumption;
//             total_people += people;
//             total_consumption += consumption;
//             data.push_back({people, consumption});
//         }

//         bubble_sort(data);

//         string result = "";
//         for (int i = 0; i < data.size(); ++i) {
//             result += to_string(data[i][0]) + "-" + to_string(data[i][1] / data[i][0]);
//             if (i != data.size() - 1)
//                 result += " ";
//         }

//         float avg = floor((float) total_consumption / total_people * 100) / 100.0f;

//         average_strings.push_back(result);
//         average_consumptions.push_back(avg);
//     }

//     for (int i = 0; i < average_strings.size(); ++i) {
//         cout << "Cidade# " << i + 1 << ":" << endl;
//         cout << average_strings[i] << endl;
//         cout << "Consumo medio: " << fixed << setprecision(2) << average_consumptions[i] << " m3." << endl;
//         if (i != average_strings.size() - 1)
//             cout << endl;
//     }

//     return 0;
// }

#include <algorithm>
#include <cmath>
#include <iomanip>
#include <iostream>
#include <sstream>
#include <string>
#include <vector>
using namespace std;

int main() {
    vector<float>  average_consumptions;
    vector<string> average_strings;

    while (true) {
        int n;
        cin >> n;
        if (n == 0)
            break;

        vector<vector<int>> data;
        int                 total_people = 0, total_consumption = 0;

        for (int i = 0; i < n; ++i) {
            int people, consumption;
            cin >> people >> consumption;
            total_people += people;
            total_consumption += consumption;
            data.push_back({people, consumption});
        }

        sort(data.begin(), data.end(),
             [](const vector<int>& a, const vector<int>& b) { return (a[1] / a[0]) < (b[1] / b[0]); });

        ostringstream avar;
        for (int i = 0; i < data.size(); ++i) {
            avar << data[i][0] << "-" << (data[i][1] / data[i][0]);
            if (i != data.size() - 1)
                avar << " ";
        }

        float avg = floor((float) total_consumption / total_people * 100) / 100.0f;

        average_strings.push_back(avar.str());
        average_consumptions.push_back(avg);
    }

    for (int i = 0; i < average_strings.size(); ++i) {
        cout << "Cidade# " << i + 1 << ":\n";
        cout << average_strings[i] << endl;
        cout << "Consumo medio: " << fixed << setprecision(2) << average_consumptions[i] << " m3." << endl;
        if (i != average_strings.size() - 1)
            cout << endl;
    }

    return 0;
}

// not solved
