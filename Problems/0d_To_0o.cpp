#include<iostream>
using namespace std;

int main() {
    int n, rem, store = 0, i = 1; // Initialize i to 1 for correct multiplication
    cin >> n;

    while (n) {
        rem = n % 8; // Get the remainder (octal digit)
        n = n / 8; // Divide by 8
        store += rem * i; // Multiply remainder by the current power of 10
        i *= 10; // Move to the next positional value (1, 10, 100, etc.)
    }

    cout << store; // Output the octal number
    return 0;
}
