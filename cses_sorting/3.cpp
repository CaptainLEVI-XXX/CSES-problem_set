#include<bits/stdc++.h>
#define int long long int
using namespace std;
#define M 1000000007

signed main(){
    int n,x;
    cin>>n>>x;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }                                         
    sort(arr.begin(),arr.end());                                
    int i=0,j=n-1,count=0;
    while(i<=j){
        if( (arr[j]+arr[i]) <= x){
           i++;j--;count++; 
        }
        else{
            j--;
            count++;
        }
    }
    cout<<count;
}