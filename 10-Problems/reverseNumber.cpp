#include<iostream>
using namespace std;

int main() {
    int n, number, rem = 0, reverse = 0;
    cin >> number;
    cin >> n;
    number--;
    while (n) {
        rem = n % 10;
        n /= 10;
        reverse += rem * pow(10, number);
        number--;
    }
    cout << reverse;
    return 0;
}
