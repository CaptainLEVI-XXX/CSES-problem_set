#include<bits/stdc++.h>
#define int long long int
using namespace std;
#define M 1000000007

signed main(){
    int n,x;
    cin>>n>>x;bool flag=0;
    map<int,int> mp; 
    for(int i=0;i<n;i++){
        int ele;
        cin>>ele;
        if(mp.count(x-ele)){
            flag=1;
            cout<< i+1 << " " << mp[x-ele] ;break;
        }
        mp[ele]=i+1;
    }
    if(!flag) cout<<"IMPOSSIBLE";
        
    
}      