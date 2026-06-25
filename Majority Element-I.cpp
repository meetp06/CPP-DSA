#include<iostream>
#include<vector>
#include<map>
using namespace std;

int main(){
vector<int> arr = {7,7,5,7,5,1,5,7,5,5,7,7,5,5,5,5};
map<int , int> mp;

    for(int i=0;i<arr.size();i++){
        mp[arr[i]] += 1;
        }
        
        for(auto i : mp){
             if(i.second > arr.size()/2){
                 cout<<i.first;
                 }
            
        }
}
