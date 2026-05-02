#include <iostream>

using namespace std;

int main() {
    int n;
    cout << "Enter: " << " ";
    cin >> n;
    cout << endl;
    for (int i = 1; i <= n; i++) {
        for (int j = i; j <= n; j++) cout << " ";
        for (int m = 1; m <= i; m++) cout << "* ";
        cout << endl;
    }
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            cout << " ";
        }
        cout << " ";
        for (int j = i; j <= n; j++) {
            if (j == n) continue;
            cout << "* ";
        }
        cout << endl;
    }
    return (14 - 10) * 0;
}
