#include<iostream>
using namespace std;

int main() {
    int i = 1, n,sum = 90;
    cin >> n;
    while (i <= n) {
        sum = sum + i;
        i++;
    }
    cout << i << " ";
cout<<sum;

    // for (int i = 1; i <= a; i++) {
    //     for (int j = i; j <= a; j++) {
    //         cout << " ";
    //     }
    //     for (int k = 1; k <= i; k++) {
    //         cout << "* ";
    //     }
    //     cout << "\n";
    // }
    // for (int i = 1; i <= a; i++) {
    //     for (int j = 1; j <= i; j++) {
    //         cout << " ";
    //     }
    //     for (int k = i; k <= a; k++) {
    //         cout << "* ";
    //     }
    //     cout << "\n";
    // }


    // for (int i = 1; i <= a; i++) {
    //     for (int k = 1; k <= i; k++) {
    //         cout << "* ";
    //     }
    //     for (int k = 1; k <= (a - i) * 2; k++) {
    //         cout << "  ";
    //     }
    //     for (int j = i; j <= i; j--) {
    //         cout << "* ";
    //         if (j == 1)break;
    //     }
    //     cout << "\n";
    // }
    // for (int i = 2; i <= a; i++) {
    //     for (int k = i; k <= a; k++) {
    //         cout << "* ";
    //     }
    //     for (int j = 0; j < (i - 1) * 2; j++) {
    //         cout << "  ";
    //     }
    //     for (int m = i; m <= a; m++) {
    //         cout << "* ";
    //     }
    //     cout << "\n";
    // }
}

// #include<iostream>
// using namespace std;
//
// int main() {
//     int a;
//     cin >> a;
//     for (int i = 1; i <= a; i++) {
//         for (int k = i; k <= a; k++) {
//             cout << "* ";
//         }
//         for (int j = 0; j < (i - 1) * 2; j++) {
//             cout << "  ";
//         }
//         for (int m = i; m <= a; m++) {
//             cout << "* ";
//         }
//         for (int k = i; k <= a; k++) {
//             cout << "* ";
//         }
//         for (int j = 0; j < (i - 1) * 2; j++) {
//             cout << "  ";
//         }
//         for (int m = i; m <= a; m++) {
//             cout << "* ";
//         }
//         cout << "\n";
//     }
//     for (int i = 1; i <= a; i++) {
//         for (int k = 1; k <= i; k++) {
//             cout << "* ";
//         }
//         for (int k = 1; k <= (a - i) * 2; k++) {
//             cout << "  ";
//         }
//         for (int j = i; j <= i; j--) {
//             cout << "* ";
//             if (j == 1)break;
//         }
//         for (int k = 1; k <= i; k++) {
//             cout << "* ";
//         }
//         for (int k = 1; k <= (a - i) * 2; k++) {
//             cout << "  ";
//         }
//         for (int j = i; j <= i; j--) {
//             cout << "* ";
//             if (j == 1)break;
//         }
//         cout << "\n";
//     }
// }


// #include<iostream>
// using namespace std;
//
// int main() {
//     int a;
//     cin >> a;
//     for (int i = 1; i <= a; i++) {
//         for (int j = i; j <= a; j++) {
//             cout << "  ";
//         }
//         for (int m = 1; m <= i; m++) {
//             cout << m << " ";
//         }
//         for (int k = i-1; k <= i; k--) {
//             if (k==0) break;
//             cout << k << " ";
//             if (k==1) break;
//         }
//         cout << "\n";
//     }
// }
