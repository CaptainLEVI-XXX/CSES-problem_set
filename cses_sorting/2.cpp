#include<bits/stdc++.h>
#define int long long int
using namespace std;
#define M 1000000007

signed main(){
    int n,m,k;
    cin>>n>>m>>k;
    vector<int> arr(n),brr(m);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<m;i++){
        cin>>brr[i];
    }
    sort(arr.begin(),arr.end());
    sort(brr.begin(),brr.end());
    int i=0,j=0,count=0;
    while(i<n && j<m){
        if(brr[j] < arr[i]-k){
            j++;
        }
        else if(brr[j]>=arr[i]-k && brr[j]<=arr[i]+k){
            count++;i++;j++;
        } 
        else{
            i++;
        }
    }
    cout<<count;
}
    
    