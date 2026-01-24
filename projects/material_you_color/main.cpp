// https://codeforces.com/problemset/problem/750/A
//
//
//
//
#include "raylib.h"
#include "raymath.h"
#include <bits/stdc++.h>
#include <cstddef>
#include <ctime>
using namespace std;
#define endl '\n'
#define ll long long

void solution();
int  main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    solution();
    return 0;
}

int random_number() {
    SetRandomSeed(time(NULL));
    int x = GetRandomValue(50, 300);
    cout << x << endl;
    return 0;
}

void solution() {
    cout << "1234234" << endl;
}
