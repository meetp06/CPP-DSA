#include<iostream>
using namespace std;

int main() {
    int x, n = 0, rem = 0, store = 0;
    cin >> x;
    n = x;
    while (x > 0) {
        rem = x % 10;
        x = x / 10;
        store = store * 10 + rem;
    }
    if (n == store)cout << store;
    return 0;
}

