#include<iostream>
#include<vector>
#include<map>
using namespace std;

int main(){
 vector<int> arr = {2,0,0,1,1,1,1,4,2,3};
int target = 3;
map<int, int> mp;
int store = 0;
int stoindex = 0;

for(int i=0; i< arr.size();i++){
    store += arr[i];
    if(store == target){
        stoindex = max(stoindex, i+1); 
        }
        
        int rem = store - target;
    if(mp.contains(rem)){
            int len = i - mp[rem];
            stoindex = max(stoindex, len);
            
            }
    if(arr[i] != 0){
               mp[store] = i;
              } 
    }
    cout<<stoindex;
    }
    
    
