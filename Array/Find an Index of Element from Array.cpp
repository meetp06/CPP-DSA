#include<iostream>
using namespace std;

// find single value
int findNumber(const int a[], const int n) {
    int e;
    cin >> e;
    for (int i = 0; i <= n; i++) {
        if (e == a[i]) return i;
    }
    return -1;
}

//find multiple value
int findNumber(const int a[], const int n) {
    int e;
    cin >> e;
    for (int i = 0; i <= n; i++) {
        if (e == a[i]) {
            cout << i << " ";
            //in last do not consider 0 because for loop run everytime
            //until condition false; give 0 because technically if results do not
            // get then given value is 0
        }
    }
}

int main() {
    const int a[90] = {1, 2, 34, 4, 55, 56, 6, 66, 56, 89, 78, 0, 56};
    cout << findNumber(a, 90);
}

