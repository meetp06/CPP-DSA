#include<iostream>
using namespace std;
// check 2nd power
int main() {
    int n;
    cin >> n;
    if (n < 0) return 0;
    for (int i = 0; i <= n; i++) {
        if (n == (1<<i)) {
            cout<<1;
            return 0;
        }
    }
    return 0;
}