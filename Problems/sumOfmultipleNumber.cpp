#include<iostream>
using namespace std;

int main() {
    int n, reminder = 0, store = 0, nstore = 0;
    cin >> n;
    while (n) {
        reminder = n % 10;
        n = n / 10;
        store = reminder + store;
    }
    if (store <= 9 && store >= 0) cout << store;
    else {
        while (store) {
            reminder = store % 10;
            store = store / 10;
            nstore = reminder + nstore;
        }
        cout << nstore;
    }
    return 0;
}

// OR

// #include<iostream>>
// using namespace std;
//
// int main() {
//     int n, reminder, store = 0;
//     cin >> n;
//     while (n > 9) {
//         reminder = 0, store = 0;
//         while (n) {
//             reminder = n % 10;
//             n /= 10;
//             store = reminder + store;
//         }
//         n = store;
//     }
//     cout << store;
//     return 0;
// }

