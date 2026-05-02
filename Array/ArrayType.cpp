#include<iostream>
using namespace std;

int main() {
    //1
    int a[5] = {1,2,3,4,5};
    cout<<a[3]<<" ";

    //2
    int a1[] = {1,2,3,4,5,6};
    cout<<a1[5]<<" ";

    //3
    int a2[10];
    for(int i=0; i<10; i++) {
        cin>>a2[i];
    }
    cout<<a2[1]<<" ";

    //4
    int a3[5] = {1,2};
    cout<<a3[1]<<" ";

    //5
    int a4[5] = {0}; // if I store only one value then all array store 0 but is only applicable for 0
    cout<<a4[4];

}
