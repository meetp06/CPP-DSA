#include <iostream>

using namespace std;

// For Loop
int main() {
    int n;
    cout << "Enter number: "; // Enter above 30 num; For better results.
    cin >> n;
    for (int i = 1; i <= n; i++) {
        if (i == 10 or i == 20 or i == 30) continue;
        cout << i << " ";
    }
}

// While Loop
int main() {
    int n, i = 1;
    cout << "Enter number: ";
    cin >> n;
    while (i <= n) {
        cout << i << " ";
        i++;
    }
}

// DO While Loop
int main() {
    int n, i = 1;
    cout << "Enter number: ";
    cin >> n;
    do {
        cout << i << " ";
        i++;
    } while (i <= n);
}
