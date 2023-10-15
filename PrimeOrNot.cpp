#include<iostream>

using namespace std;

// Find prime number
int main() {
    int n;
    bool flag = true;
    cout << "Enter Number : ";
    cin >> n;
    for (int i = 2; i < n / 2; i++) {
        if (n % i == 0) {
            flag = false;
        }
    }
    if (n == 1) cout << "Universal Number";
    else if (n < 1) cout << "Not a valid number";
    else if (flag) cout << " Prime ";
    else cout << " Not Prime ";
}
