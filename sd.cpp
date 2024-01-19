#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    vector<int> coins = {1, 2, 5, 10, 20, 50, 100};
    vector<int> coinCount(7);
    for(int i = 0; i < 7; i++) {
        cin >> coinCount[i];
    }
    int n;
    cin >> n;
    while(n--) {
        int amount;
        cin >> amount;
        for(int i = 6; i >= 0; i--) {
            int use = min(amount / coins[i], coinCount[i]);
            amount -= use * coins[i];
            coinCount[i] -= use;
        }
        if(amount > 0) {
            cout << "Transaction stopped!" << endl;
        } else {
            cout << "Transaction accepted!" << endl;
        }
    }
    return 0;
}

3
1 2 3
4 5 6
7 8 9

output ;
7 4 1 
8 5 2
9 6 3







