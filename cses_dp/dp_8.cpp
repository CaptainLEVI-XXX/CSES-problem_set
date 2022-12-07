#include<bits/stdc++.h>
#define int long long int
using namespace std;
#define M 1000000007

signed main(){
    int n,m;
    cin>>n>>m;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    vector<vector<int>> dp(n+1,vector<int> (m+1,0));
    if(arr[0]!=0){
        dp[0][arr[0]]=1;
    }
    else{
        for(int val=1;val<=m;val++){
            dp[0][val]=1;
        }
    }
    for(int i=1;i<n;i++){
       if(arr[i]==0){
        for(int val=1;val<=m;val++){
            for(int diff=-1;diff<=1;diff++){
                int curr=val + diff;
                if(curr<=m && curr>=1) dp[i][val]= (dp[i][val] + dp[i-1][curr])%M;
            }

        }
           
       }
       else{
           int val=arr[i];
           for(int diff=-1;diff<=1;diff++){
                int curr=val + diff;
                if(curr<=m && curr>=1) dp[i][val]= (dp[i][val] + dp[i-1][curr])%M;
            }
       }
        
    }
    int ways=0;
    for(int val=1;val<=m;val++){
        ways=(ways+dp[n-1][val])%M;
    }
    cout<<ways;
   // system("Pause");
}