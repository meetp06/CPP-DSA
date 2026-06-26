#include<iostream>
#include<vector>
#include<map>
using namespace std;

int main(){
// more's algorithm

vector<int> arr =  {-2,1,-3,4,-1,2,1,-5,4}; // 3, 6
int store = 0;
int maxi = arr[0];
int s=0, e=0;

for(int i=0;i<arr.size();i++){
    if(arr[i] < 0 && store == 0){
        maxi = max(maxi, arr[i]);
        
        store += 0;
        }else if(store >= 0) {
            if(store + arr[i] < 0){
                
                maxi = max(maxi, store + arr[i]);
          
            store = 0;
            }
            else{
                store += arr[i];
                maxi= max(maxi, store);
             
                }
            }
    }
    cout<<maxi<<" "<<s<<" "<<e;

}
    
    
