#include<iostream>
using namespace std;

int main() {
    int i = 0, n, store = 0, ans = 0;
    cin >> n;
    while (n >= 1) {
        const int last_digit = n % 10;
        store = store + last_digit * (1 << i);
        n = n / 10;
        i++;
    }
    cout << store << "\n";
    return 0;
}