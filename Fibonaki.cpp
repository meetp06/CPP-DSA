#include <iostream>

using namespace std;

int main() {
    int n, sum = 1, prev = 0;
    cout << "Enter number: ";
    cin >> n;
    for (int i = 1; i <= n; i++) {
        sum = sum + prev;
        prev = sum - prev;
        cout << sum << " ";
    }
}
// sum = sum + (sum - prev) :: Formula
