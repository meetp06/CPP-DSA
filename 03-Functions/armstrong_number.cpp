#include<iostream>
using namespace std;

// using a pow( inbuilt funation )
int armstrong_number(int n) {
    int rem = 0, a = 0, m = n;
    while (n > 0) {
        rem = n % 10;
        n /= 10;
        a++;
    }
    int nrem = 0, store = 0, h = m;
    while (m > 0) {
        nrem = m % 10;
        m /= 10;
        store = store + pow(nrem, a);
    }
    if (store == h) return store;
    return 0;
}

int main() {
    int n;
    cin >> n;
    cout<<armstrong_number(n);
}





#include<iostream>
using namespace std;

int armstrong_num(int n) {
    int a = 0, rem = 0, store = 0, d = 0, m = n, k = n;
    while (n > 0) {
        rem = n % 10;
        n /= 10;
        a++;
    }
    int p = a;
    while (k) {
        rem = k % 10;
        k /= 10;
        d = rem;
        while (a) {
            rem *= d;
            a--;
            if (a == 1) break;
        }
        a = p;
        store += rem;
    }
    if (store == m) return store;
    return 0;
}

//make my own pow function for this problem
int main() {
    int n;
    cin >> n;
    cout << armstrong_num(n);
}
