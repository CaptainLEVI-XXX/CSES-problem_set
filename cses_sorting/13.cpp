#include<bits/stdc++.h>
//#define int long long int
#define M 1000000007
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    set<int> mp;
    int maxi=0,i=0,j=0;
    while(i<n && j<n){
       while( j<n && !mp.count(arr[j]) ){
           mp.insert(arr[j]);
           maxi=max(maxi,j-i+1);
           j++;
       }
       while( j<n && mp.count(arr[j]) ){
           mp.erase(arr[i]);
           i++;
       }
    }
    cout<<maxi;
    return 0;

}