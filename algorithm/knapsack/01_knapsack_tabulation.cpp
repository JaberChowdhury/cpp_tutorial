#include <algorithm>
#include <iostream>
using namespace std;

int knapsackTabulation(int W, int price[], int weight[], int n) {
    int dp[n + 1][W + 1];

    for (int i = 0; i <= n; i++) {
        for (int w = 0; w <= W; w++) {

            if (i == 0 || w == 0) {
                dp[i][w] = 0;
            } else if (weight[i - 1] <= w) {
                int pick = price[i - 1] + dp[i - 1][w - weight[i - 1]];
                cout << "w = " << w << "\t weight[i - 1]] = " << weight[i - 1] << endl;

                int notPick = dp[i - 1][w];

                dp[i][w] = max(pick, notPick);
            }

            else {
                dp[i][w] = dp[i - 1][w];
            }
        }
    }

    return dp[n][W];
}

int main() {
    int price[]  = {300, 200, 400, 500};
    int weight[] = {2, 1, 5, 3};
    int W        = 10;
    int n        = 4;

    int result = knapsackTabulation(W, price, weight, n);
    cout << "Maximum value in Knapsack = " << result << endl;

    return 0;
}
