#include <iostream> 
#include <vector> 
#include <algorithm> 
#include<unordered_set> 
using namespace std; 

int main() { 
    
// optimize
unordered_set<int> arr = {1,2,2,3,4}; // 1 1 1 2 3 4 100 101 102
int store=1;
int maxi=0;

for(auto i:arr){
    if(arr.contains(i-1)){
       continue;
        }else{
            int f = i;
            store = 1;
            while(arr.contains(f+1)){
            store +=1;
            maxi = max(maxi, store);
            f++;
            }}
    }
    cout<<maxi;

// better
sort(arr.begin(), arr.end());
int store = 1;
int temp = arr[0];
int maxi = 0;
for (int i = 1; i < arr.size(); i++) {
  if (arr[i] == temp + 1) {
    temp = arr[i];
    store += 1;
    maxi = max(store, maxi);
  } else {
    temp = arr[i];
    store = 1;
  }
}
cout << maxi;


}
