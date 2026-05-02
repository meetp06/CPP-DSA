#include<iostream>
using namespace std;

int main() {
    int x;
    cin >> x;
    if (x <= 0) return 0;
    if (x == 1) cout << 1;
    for (int i = 1; i <= x; i++) {
        if (i * i > x) {
            cout << i - 1;
            return 0;
        }
        if (i * i == x) {
            cout << i;
            return 0;
        }
    }

}

