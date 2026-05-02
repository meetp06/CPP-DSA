#include<iostream>
using namespace std;

 //Find a minimum number
 int main() {
    int a[] = {18, 2, 1, 45, 5}, ans;
    ans = a[0];
    for (int i = 0; i < 5; i++) {
       if(a[i] < ans) ans = a[i];
    }
    cout << ans;
 }

//Find a maximum number
 int main() {
    int a[] = {18, 2, 1, 45, 5}, ans;
    ans = a[0];
    for (int i = 0; i < 5; i++) {
       if(a[i] > ans) ans = a[i];
    }
    cout << ans;
 }



