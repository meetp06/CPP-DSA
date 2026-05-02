#include<iostream>
using namespace std;

//find missing number
int main() {
    int a[5] = {1, 2, 5, 4, 6}, ans = 0, ans1 = 0;
    for (int i = 1; i <= 6; i++) {
        ans += i;
    }
    for (int i = 0; i < 5; i++) {
        ans1 += a[i];
    }
    cout << ans - ans1;
}
