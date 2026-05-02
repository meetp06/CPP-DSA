#include <iostream>

using namespace std;

int main() {
    int n, store;
    cout << "Enter num :";
    cin >> n;
    for (int i = 1; i <= n; i++) {
        store = n / 10;
        n = store;
        cout << i << ": " << store << endl;
        if (store == 0) {
            cout << "Total count is: " << i;
            break;
        }
    }
}


