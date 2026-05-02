#include<iostream>
using namespace std;

void swap(int &bc, int &a) { // call by refefrence using & (for a location or position)
    a = a + bc;
    bc = a - bc;
    a = a - bc;
}

int main() {
    int a, b;
    cin >> a >> b;
    swap(a, b);
    cout << a << b;
}



#include<iostream>
using namespace std;

void swap(int bc, int a) { // call by values using
    a = a + bc;
    bc = a - bc;
    a = a - bc;
}

int main() {
    int a, b;
    cin >> a >> b;
    swap(a, b);
    cout << a << b;
}