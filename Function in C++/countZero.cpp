#include<iostream>
using namespace std;

int coutZero(int n) {
    int total = 0;
    while (n >= 5) {
        n = n / 5;
        total += n;
    }
    return total;
}

int main() {
    int n;
    cin >> n;
    cout << coutZero(n);
}
