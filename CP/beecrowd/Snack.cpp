// https://judge.beecrowd.com/en/problems/view/1038

#include <iostream>
using namespace std;
int main() {
    float prices[] = {4.00, 4.50, 5.00, 2.00, 1.50};
    int   x, y;
    float total_price = 0;
    cin >> x >> y;

    for (int i = 0; i < 5; i++) {
        if (x == i + 1) {
            total_price = (float) y * prices[i];
        }
    }
    printf("Total: R$ %.2f\n", total_price);
    return 0;
}
