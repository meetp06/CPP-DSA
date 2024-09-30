#include<iostream>
using namespace std;

int main() {
    int x, rem = 0, store = 0, i = 0;
    cin >> x;
    while (x > 0) {
        rem = x % 2;
        rem ^= 1;
        x /= 2;
        store = store + rem * (1 << i);
        i++;
    }
    cout << store;
    return 0;
}
