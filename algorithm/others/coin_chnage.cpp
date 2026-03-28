#include <iostream>
using namespace std;

int coin_count = 0;

void coin_change(int amount) {
    if (amount == 0) {
        return;
    }

    int coin[] = {25, 10, 5, 1};

    for (int i = 0; i < 4; i++) {
        if (amount >= coin[i]) {
            coin_count += amount / coin[i];
            amount -= (amount / coin[i]) * coin[i];
            coin_change(amount);
            break;
        }
    }

    // if(amount >= 25){
    //     coin_count += amount/25;
    //     amount -= (amount/25) * 25;
    //     coin_change(amount);
    // }else if(amount >= 10){
    //     coin_count += amount/10;
    //     amount -= (amount/10) * 10;
    //     coin_change(amount);
    // }else if(amount >= 5){
    //     coin_count += amount/5;
    //     amount -= (amount/5) * 5;
    //     coin_change(amount);
    // }else if(amount >= 1){
    //     coin_count += amount/1;
    //     amount -= (amount/1) * 1;
    //     coin_change(amount);
    // }

    // coin_change(amount);
}

int main() {

    coin_change(117);

    cout << coin_count << endl;
    return 0;
}
