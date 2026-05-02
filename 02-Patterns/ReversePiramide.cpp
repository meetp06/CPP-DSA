#include <iostream>

using namespace std;

int main() {
    int n;
    cout << "Enter: ";
    cin >> n;
    for (int i = 1; i <= n; i++) {
        for (int j = n; j >= i; j--) cout << " ";
        for (int m = 1; m <= i; m++) cout << "* ";
        cout << endl;
    }
}
