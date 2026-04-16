#include <algorithm>
#include <cstring>
#include <iostream>
using namespace std;

int memo[5][15];
int knapsack(int max_weight, int price[], int weight[], int n) {
    int include;
    int exclude;

    if (memo[n][max_weight] != -1) {
        return memo[n][max_weight];
    } else {

        if (max_weight == 0 || n == 0) {
            return 0;
        } else if (weight[n - 1] > max_weight) {
            return knapsack(max_weight, price, weight, n - 1);
        } else {
            include = price[n - 1] + knapsack(max_weight - weight[n - 1], price, weight, n - 1);
            exclude = knapsack(max_weight, price, weight, n - 1);
        }
        return memo[n][max_weight] = max(include, exclude);
    }
}
int main() {

    int price[]    = {300, 200, 400, 500};
    int weight[]   = {2, 1, 5, 3};
    int max_weight = 10;

    memset(memo, -1, sizeof(memo));

    int result = knapsack(max_weight, price, weight, 4);
    cout << "Maximum value in Knapsack = " << result << endl;
    return 0;
}

// base case
// recursive case
