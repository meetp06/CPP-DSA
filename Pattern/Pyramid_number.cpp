#include<iostream>
using namespace std;
// pyramid number pattern
int main() {
    int a;
    cin >> a;
    for (int i = 1; i <= a; i++) {
        for (int j = i; j <= a; j++) {
            cout << "  ";
        }
        for (int m = 1; m <= i; m++) {
            cout << m << " ";
        }
        for (int k = i-1; k <= i; k--) {
            if (k==0) break;
            cout << k << " ";
            if (k==1) break;
        }
        cout << "\n";
     }
}