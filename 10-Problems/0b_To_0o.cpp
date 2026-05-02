#include<iostream>>
using namespace std;

int main() {
    int n, mod, store = 0, i = 0, nstore = 0, nmode, mul = 1;
    cin >> n;
    while (n) {
        mod = n % 10;
        n /= 10;
        store += mod * (1 << i);
        i++;
    }
    while (store) {
        nmode = store % 8;
        store = store / 8;
        nstore = nmode * mul + nstore;
        mul *= 10;
    }
    cout << nstore;
}

