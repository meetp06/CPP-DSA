#include<iostream>
using namespace std;

//Rotate number #Hard
int main() {
    int a[1000], n, b[1], s;
    cout << "Enter total Length: ";
    cin >> s;
    cout << "Enter all number: ";
    for (int i = 0; i < s; i++) {
        cin >> n;
        a[i] = n;
    }
    b[0] = a[s - 1];
    for (int i = s - 1; i < s; i--) {
        a[i] = a[i - 1];
        if (i == 1) break;
    }
    a[0] = b[0];
    cout << a[0] << " " << a[1] << " " << a[2] << " " << a[3] << " " << a[4] << " "<< a[5] << " "<< a[6] << " ";
}
