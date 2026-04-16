#include <algorithm>
#include <iostream>
using namespace std;

struct Item {
    float val;
    float weight;
    float ratio;
};

bool cmp(Item a, Item b) {
    return a.ratio > b.ratio;
}

float fractionalKnapsack(float values[], float weights[], int capacity, int size) {

    Item data[size];

    for (int i = 0; i < size; i++) {
        data[i].val    = values[i];
        data[i].weight = weights[i];
        data[i].ratio  = values[i] / weights[i];
    }

    sort(data, data + size, cmp);

    float max_profit         = 0.0;
    int   remaining_capacity = capacity;

    for (int i = 0; i < size; i++) {

        if (data[i].weight <= remaining_capacity) {
            max_profit += data[i].val;
            remaining_capacity -= data[i].weight;
        } else {
            max_profit += data[i].ratio * remaining_capacity;
            break;
        }
    }

    return max_profit;
}

int main() {
    float val[]    = {60, 100, 120};
    float wt[]     = {10, 20, 30};
    int   capacity = 50;

    int n = sizeof(val) / sizeof(val[0]);

    cout << fractionalKnapsack(val, wt, capacity, n) << endl;

    return 0;
}
