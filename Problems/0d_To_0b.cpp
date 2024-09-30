#include<iostream>
using namespace std;

int main() {
    int n, store = 0, ans = 0, mul = 1;
    cin >> n;
    for (int i = 0; n > 0; i++) {
        ans = n % 2; // or ans=n&1
        n /= 2; // or n=n>>1
        store += ans * mul;
        mul *= 10;
    }
    cout << store;
    return 0;
}