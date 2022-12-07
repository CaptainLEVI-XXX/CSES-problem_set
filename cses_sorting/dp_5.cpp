#include<bits/stdc++.h>
#define int long long int
using namespace std;
#define M 1000000007

signed main(){
    int n;
    cin>>n;
    vector<pair<int,int>> arr(n);
    for(int i=0;i<n;i++){
        int x1,x2;
        cin>>x1>>x2;
        arr.push_back({x1,1});
        arr.push_back({x2,-1});
    }
    sort(arr.begin(),arr.end());
    int count=0,maxi=INT_MIN;
    for(int i=0;i<arr.size();i++){
        count+=arr[i].second;
        maxi=max(maxi,count);
    }
    
    cout<<maxi;                                         
    
}             