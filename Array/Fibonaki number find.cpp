#include<iostream>
using namespace std;

//Fibonacci series find the element position
//Que. Find 7th number of Fibonacci series ANS- 8
int main() {
    int a = 0, b = 1, c = 0, d[80], n;
    cin >> n;
    d[0] = 0;
    d[1] = 1;
    for (int i = 2; i <= n; i++) {
        c = a + b;
        d[i] = c;
        a = b;
        b = c;
    }
    cout << d[n - 1];
}
