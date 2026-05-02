#include<iostream>
using namespace std;

//Second Maximum Number in Array
int main() {
    int a[6] = {1, 42, 590, 94, 33, 6}, ans = 0, b[6], ans1 = 0;
    ans = a[0];
    ans1 = a[0];
    for (int i = 0; i < 6; i++) {
        if (a[i] > ans) {
            ans = a[i];
        }
    }
    for (int i = 0; i < 6; i++) {
        if (ans != a[i]) {
            if (a[i] > ans1) {
                ans1 = a[i];
            }
        }
    }
    cout << ans1;
}

