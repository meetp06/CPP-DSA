#include<iostream>
using namespace std;

// BIshop
int untdu(int n, int m) {
    int a, b, c, d, e, f, g, h, store;
    a = 8 - n;
    b = 8 - m;
    if (a < b) store = a;
    else store = b;

    c = n - 1;
    d = m - 1;
    if (c < d) store += c;
    else store += d;

    e = n - 1;
    f = 8 - m;
    if (e < f) store += e;
    else store += f;

    g = 8 - n;
    h = m - 1;
    if (g < h) store += g;
    else store += h;

    return store;
}

int main() {
    int n, m;
    cin >> n >> m;
    cout << untdu(n, m);
}
