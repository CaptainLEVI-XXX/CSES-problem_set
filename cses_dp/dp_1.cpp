#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define M 1000000007
ll solve(int n,vector<ll> &dp){
    if(n==0){
        return 1;
    }
    if(n<0) return 0;
    if(dp[n]!=-1){
        return dp[n]%M;
    }
    ll ans=0;
    for(int i=1;i<=6;i++){
        ans= (ans%M + solve(n-i,dp)%M) %M;
    }
    dp[n]=ans%M;
    return dp[n]%M;
}
ll noOfWays(int n){
      vector<ll> dp(n+1,-1); 
      return solve(n,dp);
}
signed main(){
    int n;
    cin>>n;
    cout<<noOfWays(n);
   // system("Pause");
    //return 0;
}