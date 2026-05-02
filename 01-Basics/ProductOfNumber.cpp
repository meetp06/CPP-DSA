#include <iostream>

using namespace std;

//Product of number
int main() {
    int n, sum;
    cout << "Enter a Number: ";
    cin >> n;
    sum = n * (n + 1) / 2;
    cout << sum;
}