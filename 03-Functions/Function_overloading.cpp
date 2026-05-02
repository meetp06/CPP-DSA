#include<iostream>
using namespace std;

void Swap(int &bc, int &a) { // in the fuction parameter are same like data type, total parameter etc otherwise
    // will give us error : function overloading
    a = a + bc;
    bc = a - bc;
    a = a - bc;
}


int main() {
    int a, b;
    cin >> a >> b;
    Swap(a, b);
    cout << a << b<<" ";

    float aa=1.1,bb=2.2,c=3.3;

    Swap(aa,bb);

    cout<<aa<<bb<<c;
}
