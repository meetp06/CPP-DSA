#include<iostream>
using namespace std;

// NimGame: 1 -> 3, 3 -> 1, 2 -> 2,  maintain number / 4 == 0 condition for the win
int NimGame(int n) {
    if (n % 4 == 0) return 0;
    return 1;
}

int main() {
    int n;
    cin >> n;
    cout << NimGame(n);
}
