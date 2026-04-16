#include <algorithm>
#include <iostream>
using namespace std;

int knapsack(int max_weight, int price[], int weight[], int n) {
    int include;
    int exclude;
    if (max_weight == 0 || n == 0) {
        return 0;
    } else if (weight[n - 1] > max_weight) {
        return knapsack(max_weight, price, weight, n - 1);
    } else {
        include = price[n - 1] + knapsack(max_weight - weight[n - 1], price, weight, n - 1);
        exclude = knapsack(max_weight, price, weight, n - 1);
    }
    return max(include, exclude);
}
int main() {

    int price[]    = {300, 200, 400, 500};
    int weight[]   = {2, 1, 5, 3};
    int max_weight = 10;

    int result = knapsack(max_weight, price, weight, 4);
    cout << "Maximum value in Knapsack = " << result << endl;
    return 0;
}
