#include<iostream>
using namespace std;

int fact(int a) {
    int total = 1, x = a;
    while (a > 0) {
        total *= (a - 1);
        a--;
        if (a == 2) break;
    }
    cout << total * x;
    return 0;
}

int prime(int b) {
    if (b == 1 || b == 0) {
        cout << "  Not Prime";
        return 0;
    }
    int store;
    for (int i = 2; i <= b / 2; i++) {
        if (b % i == 0) {
            cout << "  Not Prime";
            return 0;
        }
    }
    cout <<" Prime";
    return 0;
}

int main() {
    fact(10);
    prime(77);
    return 0;
}
