#include<iostream>
using namespace std;

char aToA(char a) {
    char c = a - 32;
    return c;
}

int main() {
    char a;
    cin >> a;
    cout << aToA(a);
}
