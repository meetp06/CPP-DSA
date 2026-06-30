#include <iostream>
#include <vector>
#include <algorithm>
#include<deque>

using namespace std;

int main() {
    vector<int> arr = {10,22,12,3,0,6}; //22 12 6
    deque<int> store;
    int size = arr.size()-1;
    store.push_front(arr[size]);
    int temp=arr[size];
    
    for(int i=size-1;i>=0;i--){
        if(arr[i] > temp){
            store.push_front(arr[i]);
            temp = arr[i];
            }
        }
        
        for(auto i:store){
            cout<<i<<" ";
            }

}
